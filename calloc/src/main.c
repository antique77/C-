/*
 * 请你自己尝试编写calloc函数，函数内部使用malloc函数来获取内存。请你自己尝试编写calloc函数，函数内部使用malloc函数来获取内存。请你自己尝试编写calloc函数，函数内部使用malloc函数来获取内存。请你自己尝试编写calloc函数，函数内部使用malloc函数来获取内存。
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* my_calloc(size_t len,size_t size)
{
	if(len==0 || size== 0)
		return NULL;
	
	void* addr;
	if(addr == NULL)
		return NULL;
	addr = malloc(len * size);
	memset(addr,0,len*size);
	
	return addr;
}
int main()
{
	int* array;
	int len = 20;
	array = my_calloc(len,sizeof(int));

	for(int i = 0;i<20;i++)
	{
		int b =*(array+i);
		*(array+i)=i;
	}

	for(int i = 0;i<20;i++)
	{
		int c = *(array+i); 
		printf("%d ",c);
	}
	free(array);
	return (0);
}

