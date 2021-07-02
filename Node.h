#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node * next;

} Node;



Node * node_malloc()
{
    Node * node = (Node *)malloc(sizeof(Node));
    node->value = 0;
    node->next = NULL;
    return node;
}