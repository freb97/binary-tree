#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "tree.h"

Node* node_create(int data) {
    Node* node = malloc(sizeof(Node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void node_insert(int data, Node** node) {
    if (*node == NULL) {
        *node = node_create(data);
        return;
    }
    else if (data < (*node)->data) {
        node_insert(data, &(*node)->left);
    }
    else if (data > (*node)->data) {
        node_insert(data, &(*node)->right);
    }
}

void node_print_in_order(Node* node) {
    if (node == NULL) return;

    node_print_in_order(node->left);

    printf("%d ", node->data);

    node_print_in_order(node->right);
}