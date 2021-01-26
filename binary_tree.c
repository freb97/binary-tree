#include <stdio.h>
#include <stdlib.h>

#include "src/tree.h"
#include "src/sort.h"

int main() {
    Node* node = NULL;

    while (1) {
        int data;
        int scan = scanf("%d", &data);

        if (scan == 1) {
            node_insert(data, &node);
        }
        else {
            break;
        }
    }

    node_print_in_order(node);

    return 1;
}