/* 
质数就是只能被1和本身整除的整数。Eratosthenes筛选法是一种计算质数的有效
方法。这个算法的第1步就是写下所有从2至某个上限之间的所有整数。在算法的
剩余部分，你遍历整个列表并剔除所有不是质数的整数。
后面的步骤是这样的。找到列表中的第1个不被剔除的数(也就是2)，然后将列
表后面所有逢双的数都剔除，因为它们都可以被2整除，因此不是质数。接着，再
回到列表的头部重新开始，此时列表中尚未被剔除的第1个数是3，所以在3之后
把每逢第3个数(3的倍数)剔除。完成这一步之后，再回到列表开头，3后面的
下一个数是4，但它是2的倍数，已经被剔除，所以将其跳过，轮到5，将所有5
的倍数剔除。这样依次类推、反复进行，最后列表中未被剔除的数均为质数。

编写一个程序，实现这个算法，使用数组表示你的列表。每个数组元素的值用于标
记对应的数是否已被剔除。开始时数组所有元素的值都设置为TRUE，当算法要求
“剔除”其对应的数时，就把这个元素设置为FALSE。如果你的程序运行于16位
的机器上，小心考虑是不是需要把某个变量声明为long。一开始先使用包含1000
个元素的数组。如果你使用字符数组，使用相同的空间，你将会比使用整数数组找
到更多的质数。你可以使用下标来表示指向数组首元素和尾元素的指针，但你应该
使用指针来访问数组元素。
注意除了2之外，所有的偶数都不是质数。稍微多想一下，你可以使程序的空间效
率大为提高，方法是数组中的元素只对应奇数。这样，在相同的数组空间内，你可
以寻找到的质数的个数大约是原先的两倍。
 */

#include <stdio.h>
int main()
{
	printf("Hello world\n");
	return (0);
}

