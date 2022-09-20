/*
**
** QWASAR.IO -- remove_duplicates_from_sorted_list
**
** @param {listnode*} param_1
**
** @return {listnode*}
**
*/
#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif
#include <stdlib.h>

listnode* remove_duplicates_from_sorted_list(listnode* param_1)
{
    listnode* head = param_1;
    listnode* prev = NULL;
    listnode* curr = head;
    listnode* next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        if (next != NULL && curr->val == next->val)
        {
            if (prev == NULL)
            {
                head = next;
            }
            else
            {
                prev->next = next;
            }
            free(curr);
        }
        else
        {
            prev = curr;
        }
        curr = next;
    }
    return head;

}