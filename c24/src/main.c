/*
题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...
求出这个数列的前20项之和。
程序分析：请抓住分子与分母的变化规律。
 */

#include <stdio.h>
int main()
{
	int i = 0;
	float z = 2;
	float m = 1;
	float shu = 0.5;
	float temp = 1;
	for(i=1;i<=20;i++)
	{
		z*=2;
		z-=temp;
		temp=m;
		m = z-temp;
		
		shu += z/m; 
	}
	printf("shu : %f \n",shu);
	return (0);
}

