/* 
输入某年某月某日，判断这一天是这一年的第几天？
 */

#include <stdio.h>

int jishuan(int year,int month,int day)
{
	int count = 0;
	int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		arr[2]+=1;
	}
	int i = 0;
	for(i=1;i<=month-1;i++)
	{
		count+=arr[i];
	}
	count+=day;
	return count;
	
}

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d %d %d",&year,&month,&day);
    int count = jishuan(year,month,day);
	printf("%d年%d月%d日，是这一年的第%d天 \n",year,month,day,count);
	return (0);
}

