#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list{
    struct list* node;
    int value;

}list;

int creat_link(struct list* link ,int len)
{
    list* next = (list*)malloc(sizeof(list));
    if(next == NULL)
        return 0;

    link->node = next;
    for(int i = 0; i<len ; i++)
    {
        int tmp = 0;
        scanf("%d",&tmp);
        next->value = tmp;
        if(i != len-1)
        {        
            list* next_r = (list*)malloc(sizeof(list));
            if(next_r == NULL)
                return 0;
            next->node = next_r;
            next = next ->node;
        }else{
            next->node = NULL;
        }
    }
    return 1;

}

int link_sum(struct list* link_list , int len)
{
    list* next;
    next = link_list ->node;

    int sum = 0;
    while(next != NULL)
    {
		sum += next->value;
		next = next ->node;

    }
    return sum;

}
int main(void) {
    int len = 0;
    scanf("%d",&len);

    list link_list;
    int ret = creat_link(&link_list , len);
    if(ret){
    int sum = link_sum(&link_list , len);
    printf("%d \n",sum);
    }

    return 0;
}
