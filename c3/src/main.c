/*
题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
具体实现如下：
 */

#include <stdio.h>
int main()
{
	int i = 0;

	for(i=1;i<10000;i++)
	{
		int n = 0;
		for(n=1;n<100;n++)
		{
			int m = 0;
			for(m=1;m<100;m++)
			{
				int x = m*m-n*n;
				if(x==168&&(i+100==n*n)&&(i+268==m*m))
				{
				   printf("%d + 100 = %d * %d \n",i,n,n);
				   printf("%d + 168 = %d * %d \n",i,m,m);
				}
			}

		}
		
	}

	return (0);
}

