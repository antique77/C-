/*
题目：宏#define命令练习2。
 */

#include <stdio.h>

#define exchange(x,y) {int t;t=x;x=y;y=t;}
int main()
{
	int a,b =0;
	scanf("%d %d",&a,&b);
	printf("a = %d ; b = %d \n",a,b);
	exchange(a,b);
	printf("a = %d ; b = %d \n",a,b);
	return (0);
}
