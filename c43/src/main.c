/*
题目：学习使用static的另一用法。　
 */

#include <stdio.h>
int main()
{
	int num = 1;
	for(int i =0;i<3;i++)
	{
		printf("num = %d \n",num);
		num++;
		{
			static int num = 1;  //静态变量只进行一次初始化
			printf("static num = %d \n",num);
			num++;
		}
	}
	return (0);
}

