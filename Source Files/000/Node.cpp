#include <iostream>

using namespace std;

class Node {

public:

    Node(int v) : value(v), left(nullptr), right(nullptr) {}

    Node* left;
    Node* right;
    int value;

};


void preOrder(Node* node)
{
    if (node) {
        cout << node->value << "->";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(Node* node)
{
    if (node) {
        inOrder(node->left);
        cout << node->value << "->";
        inOrder(node->right);
    }
}


void postOrder(Node* node)
{
    if (node) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->value << "->";
    }
}

void addNode(Node* node, int value, int height)
{
    if (height) {
        node->left = new Node(value *= 2);
        addNode(node->left, value, --height);
        node->right = new Node(++value);
        addNode(node->right, value, height);
    }
}

// int main(int argc, char* argv[])
// {
//     Node* root = new Node(1);
//     addNode(root, 1, 3);

//     preOrder(root);
//     cout << endl;
//     inOrder(root);
//     cout << endl;
//     postOrder(root);

//     return 0;
// }
