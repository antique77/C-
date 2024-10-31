/* 
2.请编写一个函数，删除一个字符串的一部分。函数的原型如下:
int del_substr( char *str, char const*substr )
函数首先应该判断substr是否出现在str中。如果它并未出现，函数就返回0;如
果出现，函数应该把str中位于该子串后面的所有字符复制到该子串的位置，从而
删除这个子串，然后函数返回1。如果substr多次出现在str中，函数只删除第1
次出现的子串。函数的第2个参数绝不会被修改。
举个例子，假定str指向ABCDEFG。如果substr指向 FGH、CDF或XABC，函数
应该返回 0，str未作任何修改。但如果substr指向CDE，函数就把str修改为指向
ABFG，方法是把F、G和结尾的NUL字节复制到C的位置，然后函数返回1。不
论出现什么情况，函数的第2个参数都不应该被修改。
和上题的程序一样:
a.你不应该使用任何用于操纵字符串的库函数(如strcpy, strcmp，等)。
b.函数中的任何地方都不应该使用下标引用。
一个值得注意的是，空字符串是每个字符串的一个子串，在字符串中删除一个空子
串字符串不会产生变化。
 */

#include <stdio.h>

int cmp( char *str, char const* substr, int len)
{
	int flag = 1;
	while(len)
	{
		if(*(str)==*(substr))
		{
			str++;
			substr++;
		}else{
			flag = 0;
			break;
		}
		len--;
	}
	return flag;
}

int del_substr( char *str, char const*substr )
{
	int flag = 0;
	char* tmp = str;
	int count_cpy = 0;
	char* tmp_cpy = substr;
	
	while(*substr!='\0')//计算substr有效长度
	{
		count_cpy++;
		substr++;
	}
	substr=tmp_cpy;
	
	while(*str!='\0')//消除字符串
	{
		if(*str==*substr)
		{
			int cmp_ret = cmp(str,substr,count_cpy);//比较字符串
			if(cmp_ret)
			{
			  while(count_cpy)
	          {
		  		*str=' ';
				str++;
				count_cpy--;
			  }
			  flag=1;
			}
		}
		str++;
	}



	str=tmp;
	while(*str!='\0')//消除空格
	{
		if(*str == ' ')
		{
			char* tmp1 = str;
			while(*str!='\0')
			{
				*str=*(str+1);
				str++;
			}
			char* tmp2 = str;
			*(str-1)=*(str);
            str=tmp;
		}
		str++;
	}
	
	if(!flag)
	{
		return 0;
	}else{
		return 1;
	}
}

int main()
{
	char str[20];
	char substr[20];
	scanf("%s",str);
	getchar();
	scanf("%s",substr);
	int ret = del_substr (str,substr);
	if(ret)
	{
		printf("修改后的str为：%s \n",str);
	}else{
		printf("字符串未被修改");
	}
	return (0);
}

