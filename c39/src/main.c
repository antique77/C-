/*
题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
程序分析：首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,
 插入后此元素之后的数,依次后移一个位置。 
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
	int arr1[20]={0};
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	int sz = sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	printf("排好序后数组为：\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

    for(int i=0;i<10;i++)   //填充数组
	{
		arr1[i]=arr[i];
	}

	
	int sz1=sz+1;
	int cha = 0;
	printf("插入数字为：");
	scanf("%d",&cha);
	arr1[sz1-1]=cha;
	qsort(arr1,sz1,sizeof(arr[0]),cmp_int);

	printf("插入排好序后数组为：\n");
	for(int i=0;i<sz1;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");

	return (0);
}
