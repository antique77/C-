/*
题目：学习使用auto定义变量的用法。

auto存储类型只对属于块的变量有效。
auto变量具有自动存储期限、块作用域，并且无连接。
auto存储类型几乎从来不用明确地指明，因为对于在块内部声明的变量，它是默认的。
只有程序执行这些代码块时这种自动变量才会被创建，代码块执行结束后自动变量便被释放。
 */

#include <stdio.h>
int main()
{
   int num =1;
   for(int i=0;i<3;i++)
   {

	   printf("num = %d \n",num);
	   num++;
	   {
		   auto int num = 1;
	       printf("auto num = %d \n",num);
	       num++;
	   }
   }
   return (0);
}

