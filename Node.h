#ifndef STACKWITHLINKEDLIST_NODE_H
#define STACKWITHLINKEDLIST_NODE_H

template<typename T>
struct Node {
    explicit Node(const T& val, Node<T>* n)
            :data(val)
            ,next(n)
    {}

    T data;
    Node<T>* next;
};

#endif //STACKWITHLINKEDLIST_NODE_H
