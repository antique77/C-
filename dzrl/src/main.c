/* 
 KiKi学习了面向对象技术，学会了通过封装属性（变量）和行为（函数）定义类，现在他要设计一个电子日历类TDate。
 它有3个私有数据成员：Month,Day,Year和若干个公有成员函数，要求：
（1）带有默认形参值的构造函数，默认值为0, 0, 0；
（2）输出日期函数，用“日/月/年”格式输出日期；
（3）设置日期函数，从键盘输入年、月、日。
 */

#include <stdio.h>
struct stu
{
	int year;
	int month;
	int day;
}dzrl;
int main()
{
	scanf("%d %d %d",&(dzrl.year),&(dzrl.month),&(dzrl.day));
	printf("%d/%d/%d",(dzrl.day),(dzrl.month),(dzrl.year));
	return (0);
}

