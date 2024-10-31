/*
题目：输入3个数a,b,c，按大小顺序输出。
 */

#include <stdio.h>


int main()
{
	int a,b,c = 0;
	scanf("%d %d %d",&a,&b,&c);
	int arr[3] = {0};
	arr[0]=a;arr[1]=b;arr[2]=c;

	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			if(arr[i]>=arr[j])
			{
				int tmp = arr[j];
				arr[j]=arr[i];
				arr[i]=tmp;
			}
		}
	}
	printf("a=%d , b=%d , c=%d\n",arr[0],arr[1],arr[2]);
	return (0);
}

