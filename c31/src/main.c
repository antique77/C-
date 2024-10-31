/*
题目：请输入星期几的第一个字母来判断一下是星期几，
如果第一个字母一样，则继续判断第二个字母
Monday 周一，Tuesday 周二，Wednesday 周三
Thursday 周四，Friday 周五，Saturday 周六
Sunday 周日
 */

#include <stdio.h>
int main()
{
	char s;
	printf("请输入字符判断星期几：");
	scanf("%c",&s);
	getchar();
	switch (s){
		case 'M':
			printf("今天是Monday，周一\n");
			break;
		case 'W':
			printf("今天是Wednesday，周三\n");
			break;
		case 'F':
			printf("今天是Friday，周五\n");
			break;
		case 'T':
			printf("首字母还无法判断，请输入第二个字符：\n");
			scanf("%c",&s);
			switch (s){
				case 'u':
			        printf("今天是Tuesday，周二\n");
			        break;
				case 'h':
			        printf("今天是Thursday，周四\n");
			        break;
				default:
					printf("第二字符输入错误，请重新输入！");
					break;
			}
			break;
		case 'S':
			printf("首字母还无法判断，请输入第二个字符：");
			scanf("%c",&s);
			switch (s){
				case 'a':
			        printf("今天是Saturday，周六\n");
			        break;
				case 'h':
			        printf("今天是Sunday，周日\n");
			        break;
				default:
					printf("第二字符输入错误，请重新输入！");
					break;
			}
			break;
		default:
			printf("字符输入错误，请重新输入！");
			break;
	}
	return (0);
}

