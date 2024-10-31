/* 

键盘输入一个长度为len（1 <= len < 30）的字符串，再输入一个正整数 m（1 <= m <= len），
将此字符串中从第 m 个字符开始的剩余全部字符复制成为另一个字符串，并将这个新字符串输出。
要求用指针处理字符串。
 */

#include <stdio.h>
#include <string.h>
void cpy_str(char* str,int n)
{
	int count = 0;
	while(count<n)
	{
		count++;
		*str=*(str+n-1);
		str++;
	}
	*str='\0';
}
int main()
{
	char str[100];
	gets(str);
	int n = 0;
	scanf("%d",&n);
	cpy_str(str,n);
	
	printf("%s \n",str);
	return (0);
}

