/*
如果A是个x行y列的矩阵，B是个y行z列的矩阵，把A和B相乘，其结果将
是另一个x行z列的矩阵C。这个矩阵的每个元素是由下面的公式决定的:
Ci,j=∑Ai,k xBk,j
=
结果矩阵中14这个值是通过2X-2 加上-6X-3得到的。
编写一个函数，用于执行两个矩阵的乘法。函数的原型应该如下:
void matrix_multiply( int*m1, int*m2, int *r,
int x, int y, intz);
m1是一个x行y列的矩阵，m2是一个y行z列的矩阵。这两个矩阵应该相乘，结
果存储于r中，它是一个x行z列的矩阵。记住，你应该对公式作些修改，以适应
C语言下标从0而不是1开始这个事实!
 */


//以一维数组的方式处理二维数组的数据
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void matrix_multiply( int* m1, int* m2, int* r,int x, int y, int z)
{
	int a =0;
    int b =0;
	int c =0;
	for(int i = 0; i<x ; i++)
	{
 		for(int j = 0; j<z ; j++)
		{
			c=0;
			for(int h = 0; h<y ; h++)
			{
				a = *(m1+i*y+h);
                b = *(m2+h*z+j);
				*(r+i*z+j)+=(a*b);
				c = *(r+i*z+j);
			}

		}
	}
}
int main()
{
	int x,y,z = 0;
	scanf("%d %d %d",&x,&y,&z);
	int m1[x][y];
	int m2[y][z];
	int r[x][z];

	for(int i = 0; i<x ; i++)
	{
		for(int j = 0; j<y ; j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n");
	for(int i = 0; i<y ; i++)
	{
		for(int j = 0; j<z ; j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(int i = 0; i<x ; i++)
	{
		for(int j = 0; j<z ; j++)
		{
			r[i][j]=0;
		}
	}

	printf("\n");
    matrix_multiply(m1,m2,r,x,y,z);

	for(int i = 0; i<x ; i++)
	{
		for(int j = 0; j<z ; j++)
		{
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}
	return (0);
}
*/

//以二维数组的方式处理二维数组

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void matrix_multiply( int (*m1)[2], int (*m2)[4], int (*r)[4],int x, int y, int z)
{
	int a =0;
    int b =0;
	int c =0;
	for(int i = 0; i<x ; i++)
	{
 		for(int j = 0; j<z ; j++)
		{
			c=0;
			for(int h = 0; h<y ; h++)
			{
				a = *(*(m1+i)+h);
                b = *(*(m2+h)+j);
				*(*(r+i)+j)+=(a*b);
				c = *(*(r+i)+j);
			}

		}
	}
}
int main()
{
	int x,y,z = 0;
	scanf("%d %d %d",&x,&y,&z);
	int m1[x][y];
	int m2[y][z];
	int r[x][z];

	for(int i = 0; i<x ; i++)
	{
		for(int j = 0; j<y ; j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n");
	for(int i = 0; i<y ; i++)
	{
		for(int j = 0; j<z ; j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(int i = 0; i<x ; i++)
	{
		for(int j = 0; j<z ; j++)
		{
			r[i][j]=0;
		}
	}

	printf("\n");
    matrix_multiply(m1,m2,r,x,y,z);

	for(int i = 0; i<x ; i++)
	{
		for(int j = 0; j<z ; j++)
		{
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}
	return (0);
}







































