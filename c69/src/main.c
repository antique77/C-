/* 
题目：有n个人围成一圈，顺序排号。
从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，
问最后留下的是原来第几号的那位。
 */

#include <stdio.h>
int main()
{
	int n = 0; //人数
    scanf("%d",&n);
	
	//利用指针来进行判断,游戏最后只会剩下一个人才能结束
	int m=n; //游戏幸存者人数

	int arr[50]={0};
	for(int i =0;i<=n;i++) //给游戏存在的人进行编号
	{
		arr[i]=i;
	}
    //游戏会一直报数，报道0的玩家淘汰，所以需要对0值进行判断淘汰人数
	int count = 9;//赋值计数	
	while(m>1)//只有游戏剩余一人时，才结束
	{
        m=n;
		for(int i =1;i<=n;i++)//循环一圈的游戏
		{
			if(arr[i]%3==0) //需要淘汰的数值
			{
				arr[i]=0;
			}
		}

		for(int i =1;i<=n;i++)//一轮之后，幸存者重新赋值
		{
			if(arr[i]!=0)
			{
				arr[i]=count;
				count++;
			}
		}
		
		for(int i =1;i<=n;i++)//统计幸存人数
		{
			if(arr[i]==0) 
			{
				m--;
			}
		}

	}

	for(int i =1;i<=n;i++)//游戏结束后找到幸存者
	{
		if(arr[i]!=0)
		{
			printf("记号为：%d \n",i);
		}

	}
	return (0);
}

