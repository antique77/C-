/* 
学习使用按位与 &
 */

#include <stdio.h>
int main()
{
    int a,b=0;
	scanf("%d %d",&a,&b);
	int c = a & b;
	printf("a&b = %d \n",c);
	return (0);
}

