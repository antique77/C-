/*
题目：求 1 + 2! + 3! + ... + 20! 的和。
 */

#include <stdio.h>

unsigned long long back(int n,unsigned long long chen)
{
	
	if(n<=1)
		return 1;
	else{
		for(int i = 1;i<=n;i++)
		{
			
			chen *=i;
		}
	} 
		
	return chen + back(n-1,1);
		
}
int main()
{
    int n = 0;
	scanf("%d",&n);
	unsigned long long ret = back(n,1);
	printf("%llu \n",ret);
	return (0);
}

