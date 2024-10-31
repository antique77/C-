/*
当你拨打长途电话时，电话公司所保存的信息包括你拨打电话的日期和时间。它还
包括三个电话号码:你使用的那个电话、你呼叫的那个电话以及你付账的那个电话。

这些电话号码的每一个都由三个部分组成:区号、交换台和站号码。请为这些记账
信息编写一个结构声明。
 */

#include <stdio.h>
struct tele_struct {
	int quhao;
	int jiaohuanzhan;
	int zhanhaoma;
};
struct tele_node{
	int year;
	int month;
	int day;
	int time;
	struct tele_struct usr;
	struct tele_struct called;
	struct tele_struct payed;
};
int main()
{
	struct tele_node info;
}

