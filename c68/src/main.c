/* 
题目：有 n 个整数，使其前面各数顺序向后移 m 个位置，
最后m个数变成最前面的 m 个数。

程序分析：可以使用一个辅助数组来保存需要移动的元素，
然后再将元素按照要求移动到正确的位置。
 */

#include <stdio.h>
int main()
{
	int n = 0;//输入整数个数
	scanf("%d",&n);
	
	int arr[20]={0};
	for(int i = 0;i<n;i++)//输入整数
	{
		scanf("%d",&arr[i]);
	}

	int h = 0;//输入后退位置
	scanf("%d",&h);

	int arr1[20]={0}; //缓存数组
	
	int count = n-h;
	for(int i= 0;i<n;i++)//后h个数变成前h个数
	{
		if(count>=n)
			break;
		
		arr1[i]=arr[count];
		count++;
	}
	count=0;
	for(int i=h;i<n;i++)//前h个数按顺序补在后面
	{
		arr1[i]=arr[count];
		count++;
	}
	
	for(int i = 0;i<n;i++)//输出数组
	{
		printf("%d ",arr1[i]);
	}
	return (0);
}

