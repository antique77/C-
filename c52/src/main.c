/* 
题目：学习使用按位或 |
程序分析：0|0=0; 0|1=1; 1|0=1; 1|1=1 
 */

#include <stdio.h>
int main()
{
    int a,b;
	scanf("%d %d",&a,&b);
	int c = a | b;
	printf("a | b = %d \n",c);
	return (0);
}

