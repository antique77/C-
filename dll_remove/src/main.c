/*
编写一个程序，从双链表中移除一个节点，函数的原型如下
int dll_remove(struct NODE *rootp, struct NODE *node);
你可以假设节点数据结构在头文件double_linked_list_node.h文件中定义，
函数第一个参数是一个指向包含链表根指针的节点的指针（和程序12.7相同），
第二个参数是个指向欲移除的节点的指针，如果链表并不包含欲移除的指针，
函数就返回假，否则函数移除该节点并返回真。

 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct dll_link{
	struct dll_link* fwd;
	struct dll_link* bwd;
	int value;
}dll_link;

int main()
{
	
	return (0);
}

