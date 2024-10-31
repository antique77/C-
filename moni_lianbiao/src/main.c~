/* 
编写一个程序，按照下图的样子创建数据结构。最后三个对象都是动态分配的结构。
第1个对象则可能是一个静态的指向结构的指针。你不必使这个程序过于全面一-
我们将在下一章讨论这个数据结构。
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct list{
	struct list* node;
	int value;
}list;

int creat_link(struct list* head , int num)
{
	list* next = (list*)malloc(sizeof(list));

	head->node = next;
	
	for(int i = 0; i<num ; i++)
	{
		if(i!=num-1){
		list* next_r = (list*)malloc(sizeof(list));
		if(next_r == NULL)
			return NULL;
		next->node = next_r;
		next->value = i;
		next = next->node;
		}else{
			next->value = i;
			next = NULL;
		}
	}

	return 1;
	
}

void print_link(struct list* head )
{
	list* next;
	next = head->node;
	while(next != NULL)
	{
		printf("%d ",next->value);
		
		next = next->node;
	}

}
int main()
{
	int node_num = 0;
	scanf("%d",&node_num);

	list head;
	int ret = creat_link(&head,node_num);
	if(ret)
	{
		print_link(&head);
	}else{
		exit(EXIT_FAILURE);
	}
	return (0);
}

