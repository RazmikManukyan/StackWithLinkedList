#ifndef STACKWITHLINKEDLIST_STACK_H
#define STACKWITHLINKEDLIST_STACK_H
#include <iostream>
#include "Node.h"

template<typename T>
class Stack {
private:
    Node<T>* top;
public:
    Stack();
    Stack(const Stack<T>&);
    Stack<T>& operator=(const Stack<T>&);
    Stack(Stack<T>&&) noexcept;
    Stack<T>& operator=(Stack<T>&&) noexcept;
    ~Stack();

    void push(const T&);
    void pop();
    T& front() const;
    bool isEmpty() const;

    template<typename U>
    friend std::ostream& operator<<(std::ostream&, const Stack<U>&);
private:
    void copyFormOther(const Stack<T>& oth) {
        Node<T>* cur = oth.top;
        while(cur != nullptr) {
            push(cur->data);
            cur = cur->next;
        }
    }

    void clear() noexcept {
        while(!isEmpty()) {
            pop();
        }
    }

    void swap(const Stack<T>& first, const Stack<T>& second) {
        using std::swap;
        swap(first.top, second.top);
    }
};

#include "Stack.tpp"
#endif //STACKWITHLINKEDLIST_STACK_H
