/*
int palindrome(char *string);
如果参数字符串是个回文，函数就返回真，否则就返回假。回文就是指一个字符
串从左向右读和从右向左读是一样的'。函数应该忽略所有的非字母字符，而且在
进行字符比较时不用区分大小写。
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int palindrome(char *string)
{
	char* ch = string;
	int len = 0;
	int flag = 0;
	while(*string != '\0')
	{
		len++;
		string++;
	}
	string = ch;
	
		int left = 0;
		int right = len-1;
		while(left<=right)
		{
			int tmpl = isalpha(*(string+left));
			int tmpr = isalpha(*(string+right));
			
			if( ((tmpl>0)&&(tmpl>0)) || ((tmpl<=0)&&(tmpl<=0)) )
			{
				if(tolower(*(string+left))==tolower(*(string+right)))
				{
					left++;
					right--;
					flag=1;
				}else{
					return 0;
				}
			}else{
				return 0;
			}
				
		}
	return flag;
}
int main()
{
	char str[20];
	gets(str);
	int ret = palindrome(str);
	if(ret)
	{
		printf("%s 是回文 \n",str);
	}else{
		printf("%s 不是回文 \n",str);
	}
	return (0);
}

