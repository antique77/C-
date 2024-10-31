/* 
4.编写一个名叫max_list的函数，它用于检查任意数目的整型参数并返回它们中的最
大值。参数列表必须以一个负值结尾，提示列表的结束。
 */

#include <stdio.h>
#include <stdarg.h>
int max_list(int num, ...)
{
	va_list list;

	int max = 0;
	if(num>=0)
	{
		max = num;
		int next = 0;
	    va_start(list,num);
		while((next=va_arg(list,int))>=0)
		{
			if(next>max)
				max=next;
		}
		va_end(list);
	}

	return max;
}
int main()
{
	int max = max_list(1,5,7,8,3,4,6,9,3,2,10,55,66,756,-1,54,32,63);
	printf("最大值: %d \n",max);
	return (0);
}

