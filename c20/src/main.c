/*
题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
 */

#include <stdio.h>
int main()
{
	int i = 0;
	float h = 100;
	float sum = 100;
	float end1 = 0;
	for(i=1;i<=10;i++)
	{

		h/=2;
		sum+=h*2;	
		if(i==10)
		{
			end1 = h;
		}
	}
	printf("第10次落地时，共经过 %f 米？第10次反弹 %f 高 \n",sum,end1);
	return (0);
	
}

