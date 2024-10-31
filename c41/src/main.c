/*
题目：学习 static 定义静态变量的用法。
在 C 语言中，static 关键字用于声明静态变量。
静态变量与普通变量不同，它们的生存期和作用域是不同的。
静态变量在声明时被初始化，只被初始化一次，而且在整个程序的生命周期内都保持存在。
在函数内声明的静态变量只能在该函数内访问，
而在函数外声明的静态变量则只能在该文件内访问。

程序分析：以下实例中 foo() 函数声明了一个静态变量 x，并将其初始化为 0。
每次调用 foo() 函数时，x 的值都会加 1，并打印出新的值。
由于 x 是静态变量，它在程序的整个生命周期中都存在，而不仅仅是在函数调用时存在。
因此，每次调用 foo() 时，它都可以记住 x 的值，并在此基础上递增。
 */

#include <stdio.h>

void fool(void)
{
	static int y = 0;
	y++;
	printf("y= %d \n",y);
}
int main()
{
	fool();
	fool();
	fool();
	return (0);
}

