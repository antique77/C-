/* 
5.实现一个简化的printf函数，它能够处理%d、%f、%s 和%c 格式码。根据ANSI标准
的原则，其他格式码的行为是未定义的。你可以假定已经存在函数print_integer 和
print_float，用于打印这些类型的值。对于另外两种类型的值，使用putchar 来打印。
 */

#include <stdio.h>
#include <stdarg.h>
#include<string.h>
#include <math.h>
void print_float(const float* num)
{
	float tmp = *num;
	
}
void print_integer(const int* num)
{
	int tmp = *num;
	unsigned long xx = 0;
	if(num<0){
		putchar ('-');
		xx=-tmp;
	}else{
		xx=tmp;
	}

	int len_cnt = 0;
	while(xx>0)
	{
		len_cnt++;
		xx=xx/10;
	}
	
	if(num<0){
		xx=-tmp;
	}else{
		xx=tmp;
	}
	while(len_cnt)
	{
	    int tmp = xx;
		int cnt = len_cnt-1;
		int wei = 1;
		while(cnt)
		{
			wei=wei*10;
			cnt--;
		}
		tmp=tmp/wei;
		char c = tmp%10 + '0';
		putchar(c);
		len_cnt--;
	}
}

int my_print(const char* frm,...)
{
	va_list list;

	va_start(list,frm);
	int len = strlen(frm);
	for(int i = 0;i<len;i++)
	{
		switch(frm[i]){
			case '%':{
			    switch(frm[++i]){
                   case 'd':{
					int num = va_arg(list,int);
					print_integer(&num);
					break;
				    } 
                   case 'f':{
					float num = va_arg(list,float);
					print_float(&num);
					break;
				    } 
                   case 'c':{
					char* c = va_arg(list,char*);
					putchar(c);
					break;
				    } 
                   case 's':{
					char* str = va_arg(list,char*);
					for(int j = 0;str[j];j++)
					   {
						putchar (str[j]);
					}
					   
					break;
				    } 
				}

				break;
		     }
			default:{
			    putchar (frm[i]);
        		}
				
		}
	}
	va_end(list);

}

int main(void)
{       
    my_print("hello world\n");
    my_print("a : %d %d\n", 123,1000);
    my_print("a : %d\n",1000);
   // my_print("a : %d\n",INT32_MAX);
  //  my_print("a : %d\n",INT32_MIN);
 //   my_print("a : %d\n",INT32_MAX);
	my_print("a : %c\n",'T');
    my_print("a : %s\n","nihaoniubi");

    return 0;
}


