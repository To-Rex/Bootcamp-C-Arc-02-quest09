
#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif
#include <stdlib.h>


listnode* remove_nth_node_from_end_of_list(listnode* param_1, int param_2)
{
    listnode* head = param_1;
    listnode* tail = param_1;
    listnode* prev = NULL;
    listnode* curr = param_1;
    int i = 0;
    while (i < param_2)
    {
        curr = curr->next;
        i++;
    }
    while (curr != NULL)
    {
        prev = tail;
        tail = tail->next;
        curr = curr->next;
    }
    if (prev == NULL)
    {
        head = head->next;
    }
    else
    {
        prev->next = tail->next;
    }
    return head;
}