/* 
 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
 */

#include <stdio.h>
int main()
{
	int a,b = 0;
	scanf("%d %d",&a,&b);
	if(a>=b)
	{
		int i = a;
		a = b;
		b = i;
	}
	int m,n = 0;
	int i = 0;
	for(i=2;i<=a;i++)
	{
		if(a%i==0&&b%i==0)
		{
			m = i; 
			break;
		}
	}
	for(i=b;i<=a*b;i+=b)
	{
		if(i%a==0&&i%b==0)
		{
			n = i; 
			break;
		}
	}
	printf("最大公约数和最小公倍数为： %d %d \n",m,n);
	return (0);
}

//最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数； 