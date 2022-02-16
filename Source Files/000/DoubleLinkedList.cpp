#include "DoubleLinkedList.h"
#include <iostream>

template <typename T>
void DoubleLinkedList<T>::push_back(const T& val)
{
    Node<T>* newNode = new Node<T>(val);
    if (!tail) {
        head = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
    }
    tail = newNode;
}


template <typename T>
void DoubleLinkedList<T>::push_front(const T& val)
{
    Node<T>* newNode = new Node<T>(val);
    if (head) {
        newNode->next = head;
        head->prev = newNode;
    } else {
        tail = newNode;
    }
    head = newNode;
}


template <typename T>
void DoubleLinkedList<T>::pop_back()
{
    if (tail) {
        Node<T>* newTail = tail->prev;
        if (newTail) {
            newTail->next = nullptr;
        } else {
            head = nullptr;
        }
        delete tail;
        tail = newTail;
    }
}

template <typename T>
void DoubleLinkedList<T>::pop_front()
{
    if (head) {
        Node<T>* newHead = head->next;
        if (newHead) {
            newHead->prev = nullptr;
        }
        delete head;
        head = newHead;
        if (!head) {
            tail = nullptr;
        }
    }
}

template <typename T>
void DoubleLinkedList<T>::print()
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


template <typename T>
void DoubleLinkedList<T>::printReverse()
{
    Node<T>* curr_node = tail;
    while (curr_node) {
        std::cout << curr_node->val;
        curr_node = curr_node->prev;
        if (curr_node) {
            std::cout << " > ";
        }
    }
    std::cout << std::endl;
}

// int main(int argc, char* argv[])
// {
//     DoubleLinkedList<int> list;
//     list.push_back(10);
//     list.push_front(20);
//     list.push_front(40);
//     list.printReverse();
//     // list.print();
//     // list.push_front(1);
//     // list.push_front(2);
//     // list.print();
//     // list.pop_front();
//     // list.pop_front();
//     // list.pop_front();
//     // list.pop_front();
//     // list.print();
//     return 0;
// }
