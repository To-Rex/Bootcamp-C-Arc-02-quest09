#include <stddef.h>
#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif
#ifndef STRUCT_LISTNODE_ARRAY
#define STRUCT_LISTNODE_ARRAY
typedef struct s_listnode_array
{
    int size;
    listnode **array;
} listnode_array;
#endif

listnode* sort(listnode* first, listnode* second){
listnode* newNode;
    if (first == NULL)
        return second;
    if (second == NULL)
        return first;
    if (first->val > second->val) {
        newNode = second;
        newNode->next = sort(first, second->next);
    } else {
        newNode = first;
        newNode->next = sort(first->next, second);
    }
    return newNode;
}

listnode* merge_k_sorted_lists(listnode_array* nodeArr)
{
listnode *newNode = NULL;
    for(int i = 0 ; i < nodeArr->size; i++)
        newNode = sort(newNode, nodeArr->array[i]);
    return newNode;
}
