#include <cstdlib>
#include "linked_list.h"

Node_t *create_node(int val)
{
    Node_t *new_node = (Node_t *) malloc(sizeof(Node_t));

    new_node->val = val;
    new_node->next = NULL;

    return new_node;
}

Node_t *insert_at_head(Node_t **head, Node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;

    return node_to_insert;
}
