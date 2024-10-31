/* 
题目：编写input()和output()函数输入，输出5个学生的数据记录
 */

#include <stdio.h>
typedef struct
{
	char name[20];
	char sex[10];
	int age;
	int heigt;
	char banji[20];
}Stu;

void input(Stu* info,int sz)
{
	for(int i =0;i<sz;i++)
	{
		scanf("%s%s%d%d%s",info[i].name,info[i].sex,&(info[i].age),&(info[i].heigt),info[i].banji);
	}
}

void output(Stu* info,int sz)
{
	for(int i =0;i<sz;i++)
	{
		printf("%s %s %d %d %s \n",info[i].name,info[i].sex,&(info[i].age),&(info[i].heigt),info[i].banji);
	}
}

int main()
{
	Stu info[5];
	int sz = sizeof(info)/sizeof(info[0]);
	printf("输入班级人员信息： name sex age heigt banji \n");
	input(info,sz);
	printf("输出班级人员信息： name sex age heigt banji \n");	
	output(info,sz);
	return (0);
}

