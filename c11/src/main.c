/* 
题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
 （输出前40个月即可）
 */

#include <stdio.h>
int main()
{
	int month = 0;
	scanf("%d",&month);
	int i = 0;
	int a = 0;
	int b = 0; 
	int count = 2;
	for(i=1;i<=40;i++)
	{
		
		if(i>=3)
		{
			count=a+b;
			a=b;
			b=count;
			printf("%d 月的兔子总数是：%d \n",i,count);
			
		}else{
			a=2;
			b=2;
		}
		
	}
	return (0);
}

