/* 
杨辉三角形
 */

#include <stdio.h>
int main()
{
	int  n = 0;
	scanf("%d",&n);
	int arr[100][100] = {{0}};   //存放计算数字

	for(int i = 1;i <= n;i++)  //行数
	{
		   	
		for(int j = 1;j<=i;j++)
		{
			if(j==1||j==i)
			{
				arr[i][j] = 1;			
				printf("%6d ",arr[i][j]);
			}else{
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
				printf("%6d ",arr[i][j]);
			}
		}
		printf("\n");
	}
	return (0);
}

