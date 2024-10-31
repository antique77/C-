/* 
编写一个函数，从标准输入读取一列整数，把这些值存储于一个动态分配的数组中
并返回这个数组。函数通过观察EOF判断输入列表是否结束。数组的第1个数是
数组包含的值的个数，它的后面就是这些整数值。
 */

#include <stdio.h>
#include <stdlib.h>

#define len 10
void* read()
{
	int count = 1;
	int n_vl;
	int* array;
	
	array=malloc( (len+1)*sizeof(int));
	if(array == NULL)
		return NULL;
	while(scanf("%d",&n_vl))
	{

		if(n_vl == 0)
			break;

		array[++count]=n_vl;
		if(count >= len)
		{
			array = realloc(array,(count+1)*sizeof(int));
			if(array==NULL)
				return NULL;
		}
	}

		if(count < len)
		{
			array = realloc(array,(count+1)*sizeof(int));
			if(array==NULL)
				return NULL;
		}
	*array = count;
	printf("number count: %d \n",array[0]);
	for(int i = 1;i<=count;i++)
	{
		printf("%d ",array[i]);
	}

	return array;
}
int main()
{
	int*p = read();
	if(p==NULL)
		exit(EXIT_FAILURE);
	free(p);
	return (0);
}

