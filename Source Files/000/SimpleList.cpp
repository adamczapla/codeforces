#include <iostream>
#include "SimpleList.h"

template <typename T>
void SimpleList<T>::push_back(const T& val)
{
    Node<T>* newNode = new Node<T>(val);
    if (!tail) {
        head = newNode;
    } else {
        tail->next = newNode;
    }
    tail = newNode;
}

template <typename T>
void SimpleList<T>::pop_front()
{
    if (head) {
        Node<T>* newHead = head->next;
        delete head;
        head = newHead;
        if (!head) {
            tail = nullptr;
        }
    }
}

template <typename T>
void SimpleList<T>::print()
{
    Node<T>* curr_node = head;
    while (curr_node) {
        std::cout << curr_node->val;
        curr_node = curr_node->next;
        if (curr_node) {
            std::cout << " > ";
        }
    }
    std::cout << std::endl;
}

// int main(int argc, char* argv[])
// {
//     SimpleList<int> list;
//     list.push_back(2);
//     list.push_back(4);
//     list.push_back(8);
//     list.push_back(5);
//     list.print();
//     list.pop_front();
//     list.pop_front();
//     list.print();
//     list.push_back(7);
//     list.pop_front();
//     list.print();
//     return 0;
// }
