/*

 */

#include <stdio.h>
#include <stdlib.h>

struct stu{
	char name[10];
	int age;
};

int cmp_str_name(const void *p1 ,const void *p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);	
}

int cmp_str_age(const void *p1 ,const void *p2)
{
	return ((struct stu*)p1)->age-((struct stu*)p2)->age;	
}


int cmp_int(const void *p1 ,const void *p2)
{
	return *(int*)p1-*(int*)p2;
}

void swap(char* p1,char* p2,int sz)
{
	char temp = 0;
	for(int i = 0;i<sz;i++)
	{
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		p1++;
		p2++;
	}
}
void bubble_sort(const void* base,size_t num,size_t sz,int (*cmp)(const void*,const void*) )
{
	for(size_t i = 0;i<num;i++)
	{
		for(size_t j = 0;j<num;j++)
		{

			if(cmp_int((char*)base+j*sz,(char*)base+i*sz)>0)
			{
               swap((char*)base+j*sz,(char*)base+i*sz,sz);
			}
		}
	}
}
int main()
{
	int arr[10]={2,5,3,6,8,4,9,1,7,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	for(int i = 0;i<sz;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
	
	struct stu str[2] ={{"zhangshan",20},{"lishi",15}};
	int sz1 = sizeof(str)/sizeof(str[0]);
	
	bubble_sort(str,sz1,sizeof(str[0]),cmp_str_name);
	for(int i = 0;i<2;i++)
	{
		printf(" %s ",str[i].name);
	}
    printf("\n");
	
	bubble_sort(str,sz1,sizeof(str[0]),cmp_str_age);
	for(int i = 0;i<2;i++)
	{
		printf(" %d ",str[i].age);
	}
	return (0);
}

