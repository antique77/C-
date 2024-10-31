/* 
牛牛在午夜12点（0点0分0秒）正在思考，在 t 秒之后是什么时间。
他思考了 n 次这个问题。
 */

#include <stdio.h>

struct stu{
	int time;
	int hour;
	int min;
	int miao;
}tclock[11];
int main()
{
	int n = 0;
	tclock[0].time=0;
	tclock[0].hour=0;
	tclock[0].min=0;
	tclock[0].miao=0;
	
	scanf("%d",&n);
    getchar ();
	for(int i = 1;i<=n;i++)
	{
		scanf("%d",&(tclock[i].time));
	}
	for(int i = 1;i<=n;i++)
	{
		tclock[i].time+=tclock[i-1].time;
		if(tclock[i].time<3600)
		{
			tclock[i].hour=0;
			tclock[i].min=tclock[i].time;
		}else{
			tclock[i].hour = tclock[i].time/3600;
			tclock[i].min=tclock[i].time-tclock[i].hour*3600;
		}

		if(tclock[i].time<60)
		{
			tclock[i].min=0;
			tclock[i].miao=tclock[i].min;			
		}else{
			tclock[i].min = tclock[i].time/60;
			tclock[i].miao=tclock[i].time-tclock[i].min*60;	
			while(tclock[i].min > 60)
			{
				tclock[i].min-=60;
			}
		}
		printf("%d %d %d\n",tclock[i].hour,tclock[i].min,tclock[i].miao);
	}
	return (0);
}
