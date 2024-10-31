/*
 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
 例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。 
 */

#include <stdio.h>
int main()
{
	int i = 0;
	for(i=100;i<1000;i++)
	{
		int g = i%10;
		int shi = (i%100)/10;
		int bai = i/100;
		int sum = bai*bai*bai+shi*shi*shi+g*g*g;
		if(sum==i)
			printf("%d \n",i);
	}
	return (0);
}

