#include <stdio.h>


//题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。
int main(void)
{
	int i = 0;
	int count = 0;
	for(i=1;i<=4;i++)
	{
		int j = 1;
		for(j=1;j<=4;j++)
		{
			int k = 0;
			if(j==i)
			{
				continue;
			}
			for(k=1;k<=4;k++)
			{
				if(k==i||k==j)
				{
					continue;
				}else{
					printf(" %d%d%d \n",i,j,k);
					count++;
				}
			}

		}
		
	}
	printf("count: %d \n",count);
	return (0);
}

