/* 
将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5。
 */

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d",&n);
	int flag = 0;
	int m = n;
	int arr[10] = {0};
	int j = 0;
	int i = 0;
	while(!flag)
	{
	    i = 0;

		for(i=2;i<=m;i++)
		{
			if(m%i==0)
			{
				m/=i;
				arr[j] = i;
				i = 2;
				j++;
				break;
			}else if(m/i==1)
			{
				arr[j]=m;
				flag = 1;
				break;
			}
		}
	}
	printf("%d = %d ",n,arr[0]);
	for(i=1;i<=j;i++)
	{
		printf("* %d ",arr[i]);
	}
	return (0);
}

