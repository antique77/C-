/* 
题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
 */

#include <stdio.h>
int main()
{
	int n =0;
	scanf("%d",&n);
	int arr[10]={0};
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int min = arr[0];
	int max = arr[0];
	int count_min = 0;
	int count_max = 0;
	int tmp =0;
	for(int j = 0;j<n;j++)
	{
		if(max<arr[j])
		{
			max=arr[j];
			count_max=j;
		}
		if(min>arr[j])
		{
			min=arr[j];
			count_min=j;
		}
	}
    tmp=arr[0];
	arr[0]=max;
	arr[count_max]=tmp;

	tmp=arr[n-1];
	arr[n-1]=min;
	arr[count_min]=tmp;

	for(int i =0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}	
   
	return (0);
}

