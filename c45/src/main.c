/* 
学习使用register定义变量的方法
 */

#include <stdio.h>


int main()
{
	int num = 100;
	register int i =0;
	for(i=0;i<100;i++)
	{
		num+=50;
	}
	printf("num = %d \n",num);
	return (0);
}

