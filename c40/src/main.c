/*
题目：将一个数组逆序输出。
程序分析：用第一个与最后一个交换。
 */

#include <stdio.h>
#include <string.h>
void fanzhuan(int* str,int sz)
{
	int tmp;
	if(sz%2==0)
	{

	  for(int i = 0;i<=(sz/2-1);i++)
	  {
		  tmp=*(str+sz-1-i);
		  *(str+sz-1-i)=*(str+i);
		  *(str+i)=tmp;  
	  }
	}else{
	  for(int i = 0;i<sz/2;i++)
	  {
		  tmp=*(str+sz-1-i);
		  *(str+sz-1-i)=*(str+i);
		  *(str+i)=tmp;  
	  }
	}
}
int main()
{
	int arr[10]={0};
	for(int i =0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
    
	int sz = sizeof(arr)/sizeof(arr[0]);
	fanzhuan(arr,sz);
	for(int i =0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return (0);
}

