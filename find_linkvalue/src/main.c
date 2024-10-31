/* 
2、编写一个函数，在一个无序的单链表中寻找一个特定的值，
并返回一个指向该节点的指针。
你可以假设节点数据结构在头文件singly_linked_list_node.h中定义。 
如果想让这个函数适用于有序的单链表，需不需要对它做些修改？
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
	head->value =5;
	next = head;

	for(int i = 1;i<len;i++)
	{
		next ->node =malloc(sizeof(link));
		next = next ->node;
		if(next == NULL)
			return NULL;
		next ->value = 5*(i+1);
	}
	next = NULL;
	return head;
}

int seek_data(struct link* head , int seek)
{
	while(head != NULL)
	{
		if((head -> value) == seek)
			return 1;
		head = head ->node;
	}
	return 0;
}
int main(void)
{
	link* head;
	int len = 0;
	scanf("%d",&len);

	head = creat_link (len);
	if(head == NULL)
	{
		printf("链表生成失败 \n");
	}else{
		printf("链表生成成功！\n");
	}

	int seek;
	printf("输入要查找的数字：");
	scanf("%d",&seek);
	if(seek_data(head,seek))
	{
		printf("已找到相关数字 \n");
	}else{
		printf("未找到相关数字 \n");
	}
	return (0);
}

