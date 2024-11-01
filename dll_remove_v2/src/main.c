/*
编写一个程序，从双链表中移除一个节点，函数的原型如下
int dll_remove(struct NODE *rootp, struct NODE *node);
你可以假设节点数据结构在头文件double_linked_list_node.h文件中定义，
函数第一个参数是一个指向包含链表根指针的节点的指针（和程序12.7相同），
第二个参数是个指向欲移除的节点的指针，如果链表并不包含欲移除的指针，
函数就返回假，否则函数移除该节点并返回真。

优化双链表的创建函数

 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dll_link{
	struct dll_link* fwd;
	struct dll_link* bwd;
	int value;
}dll_link;

dll_link* creat_dl_link(int len)
{
	dll_link* rootp =malloc(sizeof(dll_link));
	if(rootp == NULL)
		return NULL;	
	rootp ->bwd =NULL;
	rootp ->fwd =NULL;
	
	if(len == NULL)
		return NULL;
	dll_link* head;
	dll_link* current;
	dll_link* next;
	head =malloc(sizeof(dll_link));
	if(head == NULL)
		return NULL;
	head ->fwd = NULL;
	head ->bwd = NULL;
	scanf("%d",&(head ->value));
	current = head;
	for(int i = 1;i<len;i++)
	{
		next = malloc(sizeof(dll_link));
		scanf("%d",&(next->value));
		current ->fwd = next;
		next ->bwd =current;
		current = next;
	}
	current ->fwd = NULL;
	rootp ->fwd = head;
	rootp ->bwd = current;
	return rootp;
}

void print_dl_link(struct dll_link* head)
{
	dll_link* next;
	next = head;
	next = next ->fwd;
	while(next != NULL)
	{
		printf("%d ",(next ->value));
		next = next ->fwd;
	}
	printf("\n");
	next = head ->bwd;
	while(next != NULL)
	{
		printf("%d ",(next ->value));
		next = next ->bwd;
	}	
}

int dll_remove(struct dll_link *head, struct dll_link *next)
{
	dll_link* current;
	dll_link* last;
	current = head ->fwd;
	while(current != NULL)
	{
		if((next -> value) == current ->value)
		{
			last ->fwd = next -> fwd;
			(next -> fwd) -> bwd = last;
			 next -> fwd = NULL;
			 next -> bwd = NULL;
			free(next);
			return 1;
		}
		last = current;
		current = current ->fwd;
	}
	return 0;
}
int main()
{
	dll_link* head;
	dll_link* next;
	int len;
	scanf("%d",&len);

	head = creat_dl_link(len);
	if(head == NULL)
		exit(1);
	next = ((head->fwd)->fwd)->fwd;
	if(1)
		print_dl_link(head);
	else
		printf("裁剪失败 \n");
	return (0);
}