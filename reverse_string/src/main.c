/* 
编写函数reverse_string，它的原型如下:
void reverse_string(char *string);
函数把参数字符串中的字符反向排列。请使用指针而不是数组下标，不要使用任何
C函数库中用于操纵字符串的函数。提示:不需要声明一个局部数组来临时存储参
数字符串。
 */

#include <stdio.h>
void reverse_string(char *string)
{
	int len = 0;
	char* tmp = string;
	while(*string !='\0')
	{
		len++;
		string++;
	}
	string=tmp;
	int left = 0;
	int right = len-1;
	while(left<=right)
	{
		char tmp1 = *(string+left);
		*(string+left)=*(string+right);
		*(string+right)=tmp1;

		left++;
		right--;
		
	}
}
int main(void)
{
	char str[20];
	gets(str);
	reverse_string(str);
	printf("reverse_string: %s \n",str);
	return (0);
}

