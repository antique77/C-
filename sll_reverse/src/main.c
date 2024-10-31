/* 
编写一个函数，反序排列一个单链表中所有的节点。函数应该具有下面的原型：
struct NODE *sll_reverse(struct NODE *first);
在头文件singly_linked_list_node.h中声明节点数据结构。
函数的参数指向链表的第一个节点。
当链表被重排之后，函数返回一个指向链表新头节点的指针，
链表最后一个节点的link字段的值应设置为NULL，
在空链表（first = = NULL）上执行这个函数将返回NULL。

反序排列单链表
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct link{
	struct link* node;
	int value;
}link;

link* creat_link(int len)
{
	link* head;
	link* next;

	head = malloc(sizeof(link));
	if(head == NULL)
		return NULL;
	scanf("%d",&(head ->value));
	next = head;
	for(int i =1;i<len;i++)
	{
		next ->node = malloc(sizeof(link));
		next = next ->node;
		if(next == NULL)
			return NULL;

	    scanf("%d",&(next ->value));
	}
	next = NULL;
	return head;
}

link* sll_reverse(struct link* head)
{
	link* next;
	link* current;
	if(head == NULL)
		return NULL;
	int len = 0;
	current = head;
	while(head != NULL)
	{
		len++;
		head = head ->node;
	}
	head = current;
	int arr[len];
	for(int i = 0; i<len;i++)
	{
		arr[i] = head ->value;
		head = head ->node;
	}
	head = current;
	for(int i = len-1; i>=0;i--)
	{
		head ->value = arr[i];
		head = head ->node;
	}
	return current;
}

void print_link(struct link* head)
{
	while(head != NULL)
	{
		printf("%d ",head ->value);
		head = head ->node;
	}
}
int main()
{
	int len = 0;
	link* head;
	scanf("%d",&len);

	head = creat_link(len);
	if(head == NULL)
	{
		printf("链表生成失败 \n");
	}else{
		printf("链表生成成功 \n");
	}

	sll_reverse(head);
	print_link(head);
	return (0);
}

