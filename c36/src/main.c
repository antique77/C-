/*
题目：求100之内的素数。
程序分析：质数（prime number）又称素数，有无限个。
一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。 
 */

#include <stdio.h>
int main()
{
	for(int i = 1;i<=100;i++)
	{
		int flag = 1;
		for(int j = 1;j<i;j++)
		{
			if(i%j==0&&i>2&&j>1)
			{
				flag=0;
				break;
			}
		}
		if(flag==1||i<=2)
		{
			printf("%d 是素数 \n",i);
		}
	}
	return (0);
}

