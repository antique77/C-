/* 
牛牛尝试把一个长度为 n 的数组转换成链表并把链表前两个节点交换位置和把链表最后两个节点交换位置。
 */

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
        return NULL;

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
                return NULL;
            next->node = next_r;
            next = next ->node;
        }else{
            next->node = NULL;
        }
    }
    return 1;

}

void print_link(struct list* link)
{
    list* next;
    next = link->node;
    while(next != NULL)
    {
        printf("%d ",next->value);
        next = next->node;

    }

    next = link->node;
    while(next != NULL)
    {
        list* temp;
        temp = next ->node;
        free(next);
        next = temp;

    }
}
void swap_link(struct list* link ,int len)
{
    list* previous;
    list* current;
    list* next = link;
     
    previous = link ->node;
    current = previous ->node;

    int temp = previous ->value;
    previous ->value =current ->value;
    current ->value = temp;

    
    for(int i =1 ; i<=len-2 ; i++)
    {
        next = next ->node;
    }
    previous = next ->node;
    current = previous ->node;

    temp = previous ->value;
    previous ->value =current ->value;
    current ->value = temp;

}
int main() {
    
    int len =0;
    scanf("%d",&len);
    list link;
    int ret = creat_link(&link,len);
    if(ret)
    {
    swap_link(&link,len);
    print_link(&link);
    }
    return 0;
}