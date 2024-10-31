/* 
KiKi理解了继承可以让代码重用，他现在定义一个基类shape，私有数据为坐标点x,y,
由它派生Rectangle类和Circle类，它们都有成员函数GetArea()求面积。
派生类Rectangle类有数据：矩形的长和宽；派生类Circle类有数据：圆的半径。
Rectangle类又派生正方形Square类，定义各类并测试。
输入三组数据，分别是矩形的长和宽、圆的半径、正方形的边长，输出三组数据，
分别是矩形、圆、正方形的面积。圆周率按3.14计算。
 */

#include <stdio.h>
struct stu{
	int jh;
	int jd;
	int yr;
	int zb;
}bc;
int main()
{

    scanf("%d %d %d %d",&(bc.jh),&(bc.jd),&(bc.yr),&(bc.zb));
	
	float n =(bc.yr)*(bc.yr)*3.14;
	int m =(bc.zb)*(bc.zb);
	if(((int)n%314)==0)
    {
        printf("%d\n%d\n%d",(bc.jh)*(bc.jd),(int)n,m);
    }else{
        printf("%d\n%g\n%d",(bc.jh)*(bc.jd),n,m);
    }

	return (0);
}

