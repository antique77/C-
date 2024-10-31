/*
题目：一个5位数，判断它是不是回文数。即12321是回文数，
个位与万位相同，十位与千位相同。
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

void print(int n, int count,int *arr )
{

	if(count<=1)
	{
		n=n%10;
		*(arr+5-count)=n;
		return 1;
	}else{
		int wei=n%10;
		*(arr+5-count)=wei;
	}
	return print(n/10,count-1,arr);
}


int main()
{
	int n = 0;
	scanf("%d",&n);
	int count = wei(n);
	int left = 0;
	int right = 0;
	int arr[5] = {0};
	print(n,count,arr);
	if(n%10==arr[4])
	{
		if((n/10)%10==arr[3])
		{
			if((n/100)%10==arr[2])
			{
				printf("%d 是合数 \n",n);
			}
		}
	}else{
		printf("%d 不是合数 \n",n);
	}
	return (0);
}

