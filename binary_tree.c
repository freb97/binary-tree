#include <stdio.h>
#include <stdlib.h>

#include "src/tree.h"

int main() {
    // Root node of our tree
    Node* tree = NULL;

    while (1) {
        int data;
        int scan = scanf("%d", &data);

        if (scan == 1) {
            // Call insert on root node
            node_insert(data, &tree);
        }
        else {
            break;
        }
    }

    // Print tree and pass root node
    tree_print_in_order(tree);

    // Destroy tree and pass root node
    tree_destroy(tree);

    return 1;
}