/*
   *
  ***
 *****
*******
 *****
  ***
   *
先把图形分成两部分来看待，前四行一个规律，后三行一个规律，
利用双重for循环，第一层控制行，第二层控制列。
 */

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d",&n);
    char arr[100]={' '};
	int i = 0;
	for(i=0;i<100;i++)
	{
		arr[i]=' ';
	}
	int k = 0;
	for(i=0;i<n;i++)
	{
		if(n%2!=0)
		{
			if(i<=(n/2))
			{		
				arr[n/2+i]='*';
				arr[n/2-i]='*';
			}else if(i>(n/2)){
				arr[k]=' ';
				arr[n-1-k]=' ';
				k++;
			}
		}else{
			if(i<=((n-1)/2))
			{		
				arr[n/2+i]='*';
				arr[n/2-i-1]='*';
			}else if(i>((n-1)/2)){
				arr[k]=' ';
				arr[n-1-k]=' ';
				k++;
			}
		}

		int j = 0;
		for(j=0;j<n;j++)
		{
			printf("%c",arr[j]);
		}
		printf("\n");
	}
	return (0);
}

