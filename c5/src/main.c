/* 
题目：输入三个整数 x、y、z，请把这三个数由小到大输出。
 */

#include <stdio.h>
void paixu(int *arr)
{
	int i = 0;
	for(i=0;i<3;i++)
	{
		int mid = 0;
		int j = 0;
		for(j=i;j<3;j++)
		{
			if(*(arr+i)>=*(arr+j))
			{
				mid=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=mid;
			}
		}
	}
}
int main()
{
	int arr[3] = {0};
	int i =0;
	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	paixu(arr);
	for(i=0;i<3;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return (0);
}
