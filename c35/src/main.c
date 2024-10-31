/*
题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
 */

#include <stdio.h>
#include <string.题目：将一个数组逆序输出。

程序分析：用第一个与最后一个交换。h>
void fanzhuan(char* str,int sz)
{
	char tmp;
	if(sz%2==0)
	{

	  for(int i = 0;i<=(sz/2-1);i++)
	  {
		  tmp=*(str+sz-1-i);
		  *(str+sz-1-i)=*(str+i);
		  *(str+i)=tmp;  
	  }
	}else{
	  for(int i = 0;i<sz/2;i++)
	  {
		  tmp=*(str+sz-1-i);
		  *(str+sz-1-i)=*(str+i);
		  *(str+i)=tmp;  
	  }
	}
}
int main()
{
	char str[20];
	scanf("%s",str);
	getchar();

	int sz = strlen(str);
	fanzhuan(str,sz);
	printf("%s\n",str);
	return (0);
}

