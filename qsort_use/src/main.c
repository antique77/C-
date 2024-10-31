/*
 * 
 */

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

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


int main()
{
	int arr[10]={1,4,0,2,6,3,7,5,9,8};
	int sz = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for(int i = 0;i<10;i++)
	{
		printf(" %d ",arr[i]);
	}
    printf("\n");
	struct stu str[2] ={{"zhangshan",20},{"lishi",15}};
	int sz1 = sizeof(str)/sizeof(str[0]);
	qsort(str,sz1,sizeof(str[0]),cmp_str_name);
	for(int i = 0;i<2;i++)
	{
		printf(" %s ",str[i].name);
	}
    printf("\n");
	qsort(str,sz1,sizeof(str[0]),cmp_str_age);
	for(int i = 0;i<2;i++)
	{
		printf(" %d ",str[i].age);
	}
	return (0);
}
