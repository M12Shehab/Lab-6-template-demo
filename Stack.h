#pragma once
template<class T>
class Stack
{
public:
    Stack();
    Stack(int s);
    ~Stack();

    void push(const T&);     // push an element onto the stack
    bool pop(T& value);        // pop an element off the stack
    bool isEmpty() const;      // determine whether Stack is empty { 
    bool isFull() const;

private:
    int size;                   // number of elements in the stack
    int top;                    // location of the top element
    T* stackPtr;                // pointer to the stack
};

