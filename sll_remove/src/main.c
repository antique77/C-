/* 
5、编写一个程序，从一个单链表中移除一个节点，函数的原型如下：
int sll_remove(struct NODE **rootp, struct NODE *node);
你可以假设节点数据结构在头文件singly_linked_list_node.h中定义，
函数的第一个参数是一个指向链表根指针的指针，第二个参数是一个指向欲移除的节点的指针，
如果链表并不包含该指针，函数就返回假，否则它就移除这个节点并返回真，
把一个欲移除的节点的指针而不是欲移除的值作为参数传递给函数有哪些优点？
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

int sll_remove(struct link** head, struct link* remove)
{
	link* precious;
    link* current;
	current = *head;
	while(*head != NULL)
	{
		if((*head ) == remove)
		{
			precious -> node= remove ->node;
			remove -> node = NULL;
			free(remove);
			*head = current; 
			return 1;
		}
		precious = (*head );
		(*head )= (*head)->node;
	}
	return 0;
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
	link* head;
	link* remove;
	int len = 0;
	scanf("%d",&len);

	head = creat_link(len);
	if(head == NULL)
		return NULL;

	remove = (head ->node) ->node;

	if( sll_remove(&head,remove) )
	{
		printf("节点去除成功！ \n");
		print_link(head);
	}else{
		printf("节点去除失败！ \n");
	}
	
	return (0);
}

