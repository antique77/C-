/* 
重新编写程序12.7的dll_list函数，使头和尾指针分别以一个单独的指针传递给函数，
而不是作为一个节点的一部分，从函数的逻辑而言，这个改动有何效果？
 */

int dll_insert(register Node *rootp, int value)
{
    register Node *this;
    register Node *next;
    register Node *newnode;

    for(this = rootp; (next = this->fwd) != NULL; this = next){
        if(next->value == value)
            return 0;
        if(next->value > value)
            break;
    }

    newnode = (Node *)malloc(sizeof(Node));
    if(newnode == NULL)
        return -1;
    newnode->value = value;

    newnode->fwd = next;
    this->fwd = newnode;
    if(this != rootp)
        newnode->bwd = this;
    else
        newnode->bwd = NULL;

    if(next != NULL)
        next->bwd = newnode;
    else
        rootp->bwd = newnode;
    return 1;
}
