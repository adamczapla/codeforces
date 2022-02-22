#include <iostream>

using namespace std;

class BSTNode {

public:

    BSTNode(int value, BSTNode* parent = nullptr, BSTNode* left = nullptr, BSTNode* right = nullptr)
        : value_(value), parent_(parent), left_(left), right_(right) {}

    int value_;

    BSTNode* parent_;
    BSTNode* left_;
    BSTNode* right_;

};

BSTNode* root = nullptr;

void connectNode(BSTNode* curr_node)
{
    BSTNode* parent = curr_node->parent_;

    if (!parent) {
        ::root = curr_node;
    } else if (parent->value_ >= curr_node->value_) {
        parent->left_ = curr_node;
    } else {
        parent->right_ = curr_node;
    }
}

void insertNode(int value, BSTNode* parent, BSTNode* curr_node)
{
    if (!curr_node) {
        curr_node = new BSTNode(value, parent);
        connectNode(curr_node);
    } else {
        if (value <= curr_node->value_) {
            insertNode(value, curr_node, curr_node->left_);
        } else {
            insertNode(value, curr_node, curr_node->right_);
        }
    }
}

void printBST(BSTNode* node)
{
    if (node) {
        cout << node->value_ << " ";
        printBST(node->left_);
        printBST(node->right_);
    }
}

BSTNode* largestRight(BSTNode* curr_node, BSTNode* pivot_node)
{
    if (curr_node->right_) {
        return largestRight(curr_node->right_, pivot_node);
    }

    if (curr_node->parent_ == pivot_node) {
        curr_node->parent_->left_ = curr_node->left_;
    } else {
        curr_node->parent_->right_ = curr_node->left_;
    }

    if (curr_node->left_) {
        curr_node->left_->parent_ = curr_node->parent_;
    }

    return curr_node;
}


BSTNode* smallestLeft(BSTNode* curr_node, BSTNode* pivot_node)
{
    if (curr_node->left_) {
        return smallestLeft(curr_node->left_, pivot_node);
    }

    if (curr_node->parent_ == pivot_node) {
        curr_node->parent_->right_ = curr_node->right_;
    } else {
        curr_node->parent_->left_ = curr_node->right_;
    }

    if (curr_node->right_) {
        curr_node->right_->parent_ = curr_node->parent_;
    }


    return curr_node;
}

// int main(int argc, char* argv[])
// {
//     // int x[] = {3, 8, 9, 2, 1, 5, 6, 4, 7};
//     int x[] = {5, 3, 2, 4};

//     // for (int i = 0; i < 9; ++i) {
//     for (int i = 0; i < 4; ++i) {
//         insertNode(x[i], nullptr, ::root);
//         printBST(::root);
//         cout << endl;
//     }

//     cout << largestRight(::root->left_, root)->value_ << endl;
//     printBST(::root);

//     return 0;
// }
