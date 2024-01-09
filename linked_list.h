#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
    int val;
    struct Node *next;
} Node_t;

Node_t *create_node(int val);
Node_t *insert_at_head(Node_t **head, Node_t *node_to_insert);

#endif //LINKED_LIST_H

