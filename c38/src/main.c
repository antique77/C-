/* 
求一个3*3矩阵对角线元素之和 
 */

#include <stdio.h>
int main()
{
	int arr[3][3]={{0}};
	printf("输入3*3矩阵：\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int sum = 0;
   	for(int i=0;i<3;i++)
	{
		sum+=arr[i][i];
	}
	printf("对角线的和： %d \n",sum);
	return (0);
}
