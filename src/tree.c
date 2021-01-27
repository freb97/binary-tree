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
    if (!(*node)) {
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

void tree_print_in_order(Node* node) {
    if (node == NULL) return;

    tree_print_in_order(node->left);

    printf("%d ", node->data);

    tree_print_in_order(node->right);
}

void tree_destroy(Node* node) {
    if (node == NULL) return;

    tree_destroy(node->left);
    tree_destroy(node->right);

    free(node);
}