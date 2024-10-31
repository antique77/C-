/* 
标准I/O库并没有提供一种机制，在打印大整数时用逗号进行分隔。在这个练习
中，你需要编写一个程序，为美元数额的打印提供这个功能。函数将把一个数字
字符串(代表以美分为单位的金额)转换为美元形式，如下面的例子所示:

下面是函数的原型:
void dollars( char *dest, char const *src);
src将指向需要被格式化的字符(你可以假定它们都是数字)。函数应该像上面例
子所示的那样对字符进行格式化，并把结果字符串保存到dest中。你应该保证你
所创建的字符串以一个NUL字节结尾。src的值不应被修改。你应该使用指针而
不是下标。
提示:首先找到第2个参数字符串的长度。这个值有助于判断逗号应插入到什么
位置。同时，小数点和最后两位数字应该是唯一的需要你进行处理的特殊情况。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void dollars( char *dest, char const *src)
{
	char* raw_src = src;
	char* raw_dest = dest+1;
    int dou_count = 0;
	
	int src_len = 0;
	while(*src !='\0')
	{
		src_len++;
		src++;
	}

	src=raw_src;

	*dest = '$';
	if(src_len<=2)
	{
		*(dest+1) = '0';
		*(dest+2) = '.';
		if(*(src+1) != '\0')
		{
			*(dest+3)=*src;
			*(dest+4)=*(src+1);
		}else{
			*(dest+3)= '0';
			*(dest+4)=*src;
		}
	}else{
		if((src_len-2) >3 )
		{
		    dou_count = (src_len-2)/3;
		}else{
			dou_count=0;
		}
		int tmp_len = src_len+dou_count+1;
		char a =*(src+src_len-1);
		char b =*(src+src_len-2);
		*(dest+tmp_len)=*(src+src_len-1);
		*(dest+tmp_len-1)=*(src+src_len-2);
		*(dest+tmp_len-2)='.';

		tmp_len -= 2 ;
		src_len -= 2 ;
		int count = 0;
		while( tmp_len >1 )
		{

			if(count != 3)
			{
				*(dest+tmp_len-1)=*(src+src_len-1);
				count++;
				src_len--;
			}else{
				*(dest+tmp_len-1) = ',';
				count = 0;
			}
			tmp_len--;
		}
	}
}
int main()
{
	char str[30];
	gets(str);

	char dest[1000] = {'\0'};
	dollars(dest,str);
	printf("%s \n",dest);
	return (0);
}

