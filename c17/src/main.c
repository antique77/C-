/*
输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
程序分析：利用while语句,条件为输入的字符不为'\n'
 */

#include <stdio.h>


int main()
{

	int y,k,s,q = 0;
	char n;
	while( ( n = getchar() ) != '\n')
	{
		if(n>='0'&&n<='9')
		{
			s++;
		}else if((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
		{
			y++;
		}else if(n==' ')
		{
			k++;
		}else
		{
			q++;
		}
		
	}
	printf("英文字母、空格、数字和其它字符的个数为：%d %d %d %d",y,k,s,q);
	return (0);
}

