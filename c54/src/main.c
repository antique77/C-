/* 
题目：取一个整数 a 从右端开始的 4～7 位。
 */

#include <stdio.h>
int main()
{
	unsigned int a,b,c = 0;
	scanf("%o",&a);
	b = a >> 4;
    c=~(~0<<4);
	b=b&c;
	printf("%o",b);
	return (0);
}

