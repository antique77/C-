/*
键盘随机输入 6 个整数，将这些数据保存到数组中，
利用指针遍历数组中的元素并打印。
 */

#include <stdio.h>
int main()
{
	int arr[6]={0};
	for(int i = 0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<6;i++)
	{
		printf("%d ",*(arr+i));
	}
	return (0);
}

