/*
利用递归方法求5!。
 */

#include <stdio.h>

unsigned long long back(int n)
{
	if(n<=1)
		return 1;
	return n*back(n-1);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	unsigned long long ret = back(n);
	printf("%llu \n",ret);
	return (0);
}

