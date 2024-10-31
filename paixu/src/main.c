/* 
 牛牛试图给一个长度为 n 整数数组排序，
 即实现一个 void sort(int *array,int n)  
 */

#include <stdio.h>
#include <stdlib.h>
int cmp_int(const void* p1,const void* p2)
{
	return (*(int*)p1)-(*(int*)p2);
}
int main()
{
	int arr[100]={0};
	int n = 0;
	scanf("%d",&n);
	getchar();
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(arr[0]),cmp_int);
	for(int i = 0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return (0);
}
