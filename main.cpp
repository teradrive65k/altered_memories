#include <iostream>
#include "linked_list.h"

int main ()
{
    Node_t *head = NULL;
    Node_t *node_to_insert;
    for(int i = 0; i < 10; i++) {
        node_to_insert = create_node(i);
        insert_at_head(&head, node_to_insert);
    }

    return EXIT_SUCCESS;
}
