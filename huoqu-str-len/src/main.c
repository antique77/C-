/* 
键盘输入一个字符串，编写代码获取字符串的长度并输出，要求使用字符指针实现。
 */

#include <stdio.h>
#include <string.h>
int str_len(char* str)
{
	int count = 0;
	while(*str!='\0')
	{
        str++;
		count++;
	}
	return count++;
}
int main()
{
	char str[100];
    //scanf("%s",str);
    gets(str);
	int ret = str_len(str);
	printf("%d",ret);
	return (0);
}

