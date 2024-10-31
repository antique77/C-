/*
 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
 例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
 */

#include <stdio.h>

int leiji(int w , int n )
{
	int temp = n;
	int i = 0;
	for(i=1;i<w;i++)
	{
		temp = temp*10;
		temp += n;
	}
	if(w<=1)
		return 2;

	return temp+leiji(w-1,n);
}
int main()
{
	int w,n = 0;
	scanf("%d %d",&w,&n);
	int ret = leiji(w,n);
	printf("a+aa+...a = %d \n",ret);
	return (0);
}

