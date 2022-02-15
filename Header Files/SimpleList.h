#ifndef SIMPLELIST_H
#define SIMPLELIST_H

template <typename T>
class Node;

template <typename T>
class SimpleList {
public:

    SimpleList() = default;

    void push_back(const T&);
    void pop_front();
    void print();

private:

    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
};

template <typename T>
class Node {

    friend class SimpleList<T>;

public:

    Node(const T& v) : val(v) {}

private:

    Node<T>* next = nullptr;
    T val;
};

#endif  // SIMPLELIST_H
