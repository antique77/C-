/*
 * 判断 101 到 200 之间的素数
 */

#include <stdio.h>


int main()
{
	int i = 0;

	for(i=101;i<=200;i+=2)
	{
		int j = 0;
		int flag = 0;
		for(j=1;j<=(i-1)/2;j+=2)
		{
			if(i%j==0&&j!=1)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			printf(" %d ",i);
		}
	}
	return (0);
}

