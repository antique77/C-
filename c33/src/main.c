/*
题目：判断一个数字是否为质数。
程序分析：质数（prime number）又称素数，有无限个。
一个大于1的自然数，除了1和它本身外，不能被其他自然数整除
 */

#include <stdio.h>

int main()
{
	for(int n = 3;n<=1000;n+=2)
	{
	int flag = 1;
	for(int i = 3;i<(n/2);i+=2)
	{
		if(n%i==0)
		{
			flag = 0;
			break;
		}
		
	}
	if(flag||n==1||n==2)
	{
		printf("%d 是质数 \n",n);
	}
	}
	return (0);
}
