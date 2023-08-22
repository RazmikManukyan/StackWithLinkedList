#include "Stack.h"

template<typename T>
Stack<T>::Stack():top(nullptr) {}

template<typename T>
Stack<T>::Stack(const Stack<T>& oth) :top(nullptr) {
    copyFormOther(oth);
}

template<typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& oth) {
    if(this != &oth) {
        clear();
        copyFormOther(oth);
    }
    return *this;
}

template<typename T>
Stack<T>::Stack(Stack<T> &&oth) noexcept :top(nullptr) {
    swap(*this, oth);
}

template<typename T>
Stack<T>& Stack<T>::operator=(Stack<T> &&oth) noexcept {
    swap(*this, oth);
    return *this;
}

template<typename T>
Stack<T>::~Stack() {
    while(!isEmpty()) {
        clear();
    }
}

template<typename T>
void Stack<T>::push(const T &val) {
    Node<T>* newNode = new Node(val, top);
    top = newNode;
}

template<typename T>
void Stack<T>::pop() {
    if(!isEmpty())
        return;

    Node<T>* tmp = top;
    top = top->next;
    delete tmp;
}

template<typename T>
T& Stack<T>::front() const{
    if(!isEmpty()) {
        throw std::runtime_error("Stack is empty!");
    }
    return top->data;
}

template<typename T>
bool Stack<T>::isEmpty() const {
    return top == nullptr;
}

template<typename U>
std::ostream &operator<<(std::ostream &os, const Stack<U> &st) {
    Node<U>* cur = st.top;
    while(cur != nullptr) {
        os << cur->data << " ";
        cur = cur->next;
    }
    return os;
}