/*
编写一个函数，实现两个整数的交换，要求采用指针的方式实现。
 */

#include <stdio.h>
void change(int* n,int* m)
{
	int tmp = *n;
	*n=*m;
	*m=tmp;
}
int main()
{
	int m,n = 0;
	scanf("%d %d",&n,&m);
	change(&n,&m);
	printf("%d %d\n",n,m);
	return (0);
}

