/* 
牛牛学习了指针相关的知识，想实现一个 int cal(int *array,int n) 
的函数求出长度为 n 的数组的和。
 */

#include <stdio.h>

int cal(int *array,int n) 
{
	int sum = 0;
	for(int i = 0;i<n;i++)
	{
		sum+=*(array+i);
	}
	return sum;
}
int main()
{
	int arr[100]={0};
    int n =0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	int ret = cal(arr,n);
	printf("%d",ret);
	return (0);
}
