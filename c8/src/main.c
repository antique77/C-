/*
输出 9*9 口诀
*/

#include <stdio.h>
int main()
{
	int i = 0;
	for(i=1;i<=9;i++)
	{
		int j = 0;
		for(j=1;j<=i;j++)
		{
			printf("%d * %d = %02d ",i,j,i*j);
		}
		printf("\n");
	}
	return (0);
}

