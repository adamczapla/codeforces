#include <iostream>

using namespace std;

class BSTNode {

    friend void connectNode(BSTNode*);
    friend void disconectNode(BSTNode*);
    friend void insertNode(int, BSTNode*, BSTNode*);
    friend void printBST(BSTNode*);
    friend BSTNode* largestNode(BSTNode*, BSTNode*);
    friend BSTNode* smallestNode(BSTNode*, BSTNode*);
    friend void replaceNode(BSTNode*, BSTNode*);
    friend void removeNode(int, BSTNode*);

public:

    BSTNode(int value, BSTNode* parent = nullptr, BSTNode* left = nullptr, BSTNode* right = nullptr)
        : value_(value), parent_(parent), left_(left), right_(right) {}

private:

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

void disconectNode(BSTNode* curr_node)
{
    BSTNode* parent = curr_node->parent_;

    if (!parent) {
        ::root = nullptr;
    } else if (parent->value_ >= curr_node->value_) {
        parent->left_ = nullptr;
    } else {
        parent->right_ = nullptr;
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

BSTNode* largestNode(BSTNode* curr_node, BSTNode* pivot_node)
{
    if (curr_node->right_) {
        return largestNode(curr_node->right_, pivot_node);
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


BSTNode* smallestNode(BSTNode* curr_node, BSTNode* pivot_node)
{
    if (curr_node->left_) {
        return smallestNode(curr_node->left_, pivot_node);
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

void replaceNode(BSTNode* old_node, BSTNode* new_node)
{
    new_node->parent_ = old_node->parent_;
    new_node->left_ = old_node->left_;
    new_node->right_ = old_node->right_;

    if (new_node->left_) {
        new_node->left_->parent_ = new_node;
    }

    if (new_node->right_) {
        new_node->right_->parent_ = new_node;
    }
}


void removeNode(int value, BSTNode* curr_node)
{
    if (!curr_node) {
        cout << "Value " << value << " not found" << endl;
        return;
    }

    if (curr_node->value_ == value) {
        BSTNode* end_node = nullptr;

        if (curr_node->left_) {
            end_node = largestNode(curr_node->left_, curr_node);
        } else if (curr_node->right_) {
            end_node = smallestNode(curr_node->right_, curr_node);
        } else {
            disconectNode(curr_node);
        }

        if (end_node) {
            replaceNode(curr_node, end_node);
            connectNode(end_node);
        }

        delete curr_node;

    } else if (curr_node->value_ > value) {
        removeNode(value, curr_node->left_);
    } else {
        removeNode(value, curr_node->right_);
    }
}


// int main(int argc, char* argv[])
// {

//     cout << "Inserting ..." << endl;

//     int x[] = {3, 8, 9, 2, 1, 5, 6, 4, 7};

//     for (int i = 0; i < 9; ++i) {
//         insertNode(x[i], nullptr, ::root);
//         printBST(::root);
//         cout << endl;
//     }

//     cout << "Removing ..." << endl;

//     int z[] = {3, 0, 4, 8, 6, 7, 9, 2, 2, 5, 1};

//     for (int i = 0; i < 11; ++i) {
//         removeNode(z[i], ::root);
//         printBST(::root);
//         cout << endl;
//     }

//     return 0;
// }
