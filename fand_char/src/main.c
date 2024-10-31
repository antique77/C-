/*
1.请编写一个函数，它在一个字符串中进行搜索，查找所有在一个给定字符集合中出
现的字符。这个函数的原型应该如下:
char *find_char(char const *source,
char const *chars );
它的基本想法是查找source字符串中匹配chars字符串中任何字符的第1个字符，
函数然后返回一个指向source中第1个匹配所找到的位置的指针。如果source中
的所有字符均不匹配chars中的任何字符，函数就返回一个NULL指针。如果任何
一个参数为NULL，或任何一个参数所指向的字符串为空，函数也返回一个NULL
指针。
举个例子，假定source指向ABCDEF。如果chars 指向XYZ、JURY或QQQQ，函
数就返回一个NULL指针。如果chars指向XRCQEF，函数就返回一个指向source
中C字符的指针。参数所指向的字符串是绝不会被修改的。
碰巧，C函数库中存在一个名叫strpbrk的函数，它的功能几乎和这个你要编写的
函数一模一样。但这个程序的目的是让你自己练习操纵指针，所以:
a.你不应该使用任何用于操纵字符串的库函数(如strcpy, strcmp, index等)。
b.函数中的任何地方都不应该使用下标引用。
 */

#include <stdio.h>

char* find_char(char const *source,char const *chars )
{
	int flag = 0;
	char str[20];
	int i = 0;
	do
	{
		str[i]=*source;
	    source++;
	    i++;
	}while(*source!='\0');
	
	while(*chars!='\0')
	{
		i=0;
		while(str[i]!='\0')
		{
			if(*chars==str[i]){
				return chars;
			}
			i++;
		}
		chars++;
	}
	
	return NULL;
}
int main()
{
	char str1[20];
	char str2[20];

	scanf("%s",str1);
	getchar();
	scanf("%s",str2);
    char* ret = find_char(str1,str2);
	
	if(*ret==NULL)
	{
	   printf("未找到共同字符");	
	}else{
	   printf("首个共同字符为：%c",*ret);
	}


	return (0);
}

