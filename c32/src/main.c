/*
题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
 */

#include <stdio.h>
#include <string.h>
int main()
{
	printf("输入字符串：\n");
	char str[15];
	scanf("%s",str);
	getchar();
	int sz = strlen(str);
	char del;
	printf("输入要删除的字符：");
	scanf("%c",&del);
	for(int i = 0;i<sz;i++)
	{	
        if(del==str[i])
	    {
		   for(int j = i;j<sz-1;j++)
		   {
			   str[j]=str[j+1];
		   }
		   str[sz-1]=' ';
		   sz--;
		}
	}
	printf("%s \n",str);
	return (0);
}

