/*
1、编写一个函数，用于计数一个单链表的节点个数,
它的唯一参数是一个指向链表第一个节点的指针，编写这个函数时，
你必须知道哪些信息？这个函数还能用于执行其他任务吗？
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

	if(len == 0)
		return NULL;

	head = malloc(sizeof(link));
	if(head == NULL)
		return NULL;
    head ->value =0;
	next = head;
	for(int i=1 ; i<len ; i++)
	{
		next ->node = malloc(sizeof(link));
		if(next == NULL)
			return NULL;
		next = next ->node;
		next ->value = i;
	}
	next = NULL;
	
	return head;
}

int link_count(struct link* head)
{
	link* next;
	link* next_r;
	int count = 0;

	next = head;

	while(next != NULL)
	{
		count++;
		next_r = next->node;
		free(next);
		next = next_r;	
	}
	return count;
}

int main(void)
{
	int len = 0;
	scanf("%d",&len);
	
	link* head;
	head = creat_link (len);
	if(head == NULL)
	{
		printf("链表生成失败 \n");
	}else{
		printf("链表生成成功 \n");
		printf("链表节点个数为： %d \n",link_count(head));
	}

	
	return (0);
}

