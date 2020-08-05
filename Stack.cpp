#include <iostream>
using namespace std;

#include "Stack.h"
// default constructor
template<class T>
Stack<T>::Stack() {
    size = 10;  // we assume a default stack size is 10  
    top = -1;  // stack initially empty
    stackPtr = new T[size]; // allocate memory for elements
}

// constructor
template<class T>
Stack<T>::Stack(int s) {
    size = s;
    top = -1;  // stack initially empty
    stackPtr = new T[size]; // allocate memory for elements
}

// destructor
template<class T>
Stack<T>::~Stack() {
    delete[] stackPtr;
}

// push element onto stack;
template<class T>
void Stack< T >::push(const T& value) {
    if (!isFull())
        stackPtr[++top] = value;
    else
        cout << "Stack is full" << endl;
}

// pop element off stack;
template<class T>
bool Stack<T>::pop(T& value) {
    if (!isEmpty()) {
        value = stackPtr[top--];  // pops top element from the stack
        return true;
    }

    cout << "Stack is empty.";
    return false;
}

// check if stack is empty
template<class T>
bool Stack<T>::isEmpty() const {
    return top == -1;
}

// check if stack is full
template<class T>
bool Stack<T>::isFull() const {
    return top == size - 1;
}

//void temp_func()
//{
//    Stack<double> doubleStack(2);
//    doubleStack.push(10.5);
//    bool r = doubleStack.pop(150.0);
//}