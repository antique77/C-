/*
 题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"，
 例如 6=1＋2＋3 ，请编程找出 1000 以内的所有完数。
 */

#include <stdio.h>
int main()
{
	int i = 0;
	for(i=2;i<=1000;i++)
	{
		int tmp = 0;
		int j = 0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				tmp+=j;
			}
		}
		
		if(i==tmp)
		{
			printf(" %d ",i);
		}
		
	}
	return (0);
}
