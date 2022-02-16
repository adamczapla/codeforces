#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

template <typename T>
class Node;

template <typename T>
class DoubleLinkedList {
public:

    DoubleLinkedList() = default;

    void push_back(const T&);
    void push_front(const T&);
    void pop_front();
    void pop_back();
    void print();
    void printReverse();

private:

    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
};

template <typename T>
class Node {

    friend class DoubleLinkedList<T>;

public:

    Node(const T& v) : val(v) {}

private:

    Node<T>* prev = nullptr;
    Node<T>* next = nullptr;
    T val;
};

#endif  // DOUBLELINKEDLIST_H
