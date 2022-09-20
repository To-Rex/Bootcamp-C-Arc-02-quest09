/*
**
** QWASAR.IO -- reverse_linked_list
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <setjmp.h>
//#include <cmocka.h>
#include <unistd.h>


listnode* reverse_linked_list(listnode* param_1)
{
    listnode* prev = NULL;
    listnode* curr = param_1;
    listnode* next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;

    // return param_1;

}