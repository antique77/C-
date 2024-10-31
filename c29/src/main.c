/*
题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
 */

#include <stdio.h>
int wei(int n)
{
	int n1 = n;
	int count1 = 1;
	while(n1)
	{
		n1/=10;
		if(n1)
			count1++;
		
	}
	return count1;
}

void print(int n, int count)
{

	if(count<=1)
	{
		n=n%10;
		printf(" %d ",n);
		return 1;
	}else{
		int wei=n%10;
		printf(" %d ",wei);
	}
	return print(n/10,count-1);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int count = wei(n);
	printf("位数为：%d ，逆序为：",count);
	print(n,count);
	return (0);
}
