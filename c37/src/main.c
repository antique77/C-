/*
题目：对10个数进行排序。
 */

#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void* p1,const void* p2)
{
	return *(int*)p1-*(int*)p2;
}
int main()
{
	int arr[10]={0};
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sz = sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return (0);
}

