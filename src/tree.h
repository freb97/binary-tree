#ifndef TREE_H
#define TREE_H

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* node_create(int data);

void node_insert(int data, Node** node);

void tree_print_in_order(Node* node);

void tree_destroy(Node* node);

#endif // TREE_H