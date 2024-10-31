/* 
牛牛正在买书，每本书都有名字和价格，牛牛想把书按照价格升序排序。
 */

#include <stdio.h>
#include <stdlib.h>
struct stu{
	char str[20];
	int money;
}book[100];
int cmp_money(const void* p1,const void* p2)
{
	return ((struct stu*)p1)->money-((struct stu*)p2)->money;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	getchar ();
	for(int i = 0;i<n;i++)
	{
		scanf("%s %d",&(book[i].str),&(book[i].money));
	}
	qsort(book,n,sizeof(book[0]),cmp_money);
	for(int i = 0;i<n;i++)
	{
		printf("%s\n",book[i].str);
	}
	return (0);
}

