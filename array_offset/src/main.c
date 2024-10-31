/*
如你所知，C编译器为数组分配下标时总是从0开始。而且当程序使用下标访问数
组元素时，它并不检查下标的有效性。在这个项目中，你将要编写一个函数，允许
用户访问“伪数组”，它的下标范围可以任意指定，并伴以完整的错误检查。
下面是你将要编写的这个函数的原型:
int array_offset( int arrayinfo[]，...);
这个函数接受一些用于描述伪数组的维数的信息以及一组下标值。然后它使用这些
信息把下标值翻译为一个整数，用于表示一个向量(一维数组)的下标。使用这个
函数，用户既可以以向量的形式分配内存空间，也可以使用malloc分配空间，但
按照多维数组的形式访问这些空间。这个数组之所以被称为“伪数组”是因为编译
器以为它是个向量，尽管这个函数允许它按照多维数组的形式进行访问。
这个函数的参数如下:
参数
含义
一个可变长度的整型数组，包含一些关于伪数组的信息。arrayinfo[0]指定伪数组具有的
arrayinfo
维数，它的值必须在1和10之间(含10)。arrayinfo[1]和arrayinfo[2]给出第1维的下
限和上限。arrayinfo[3]和arrayinfo[4]给出第2维的下限和上限，以此类推
参数列表的可变部分可能包含多达10个的整数，用于标识伪数组中某个特定位置的下
标值。你必须使用va_参数宏访问它们。当函数被调用时，arrayinfo[0]参数将会被传递
公式根据下面给出的下标值计算一个数组位置。变量s1,S2等代表下标参数s1,S2等。
变量1o和hi代表下标s的下限和上限，它们来源于arrayinfo参数，其余各维依
次类推。变量loc表示伪数组的目标位置，它用一个距离伪数组起始位置的整型偏
移量表示。对于一维伪数组:
10c
51-101
对于二维伪数组:
loc - (s; - 101)*(hi2 - 102+1)+ 82 - 102
对于三维伪数组:
loc = [(s1 -l01)x(hi2 - 102+1)+S2 - 102]x
(hi3- 103+ 1) + 83 - 103
对于四维伪数组:
loc = <{>[(s」-10;)* (hiz - 102 + 1)+ 32 - 102]* (hi3 - 103+ 1)+ 93 - 103<}> *
(hi4- l04+1) +s4 - 104
一直到第10维为止，都可以类似地使用这种方法推导出loc的值。
你可以假定arrayinfo是个有效的指针，传递给array_offset的下标参数值也是正确
的。对于其他情况，你必须进行错误检查。可能出现的一些错误有:维的数目不处
于1和10之间;下标小于low值;low值大于其对应的hign值等。如果检测到这
些或其他一些错误，函数应该返回-1。
提示:把下标参数复制到一个局部数组中。你接着便可以把计算过程以循环的形式
编码，对每一维都使用一次循环。
举例:假定arrayinfo包含值3,4,6,1,5,-3 和3。这些值提示我们所处理的是三维伪数
组。第1个下标范围从4到6，第2个下标范围从1至5，第3个下标范围从-3到
3。在这个例子中，array_offset被调用时将有3个下标参数传递给它。下面显示了
几组下标值以及它们所代表的偏移量。
 */

#include <stdio.h>
int main()
{
	printf("Hello world\n");
	return (0);
}
