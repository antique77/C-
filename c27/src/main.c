/*
 利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
 */

#include <stdio.h>
#include <string.h>

void print(char *arr , int len)
{
	if(len<=0)
	{
		printf("%c",*(arr+len));
		return 1;
	}else 
		printf("%c",*(arr+len));
	
	return print(arr,len-1);
}
int main()
{
	char arr[20];

	scanf("%s",arr);
	int len =strlen(arr);
	print(arr,len);
	return (0);
}

