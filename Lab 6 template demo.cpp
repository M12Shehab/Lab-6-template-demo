// Lab 6 template demo.cpp 
// Mohammed Shehab

#include <iostream>
using namespace std;

#include "Stack.h"

// We need to include the cpp file to solve link error.
// More info read :https://www.codeproject.com/Articles/48575/How-to-Define-a-Template-Class-in-a-h-File-and-Imp#:~:text=Background-,The%20common%20procedure%20in%20C%2B%2B%20is%20to%20put%20the%20class,and%20linking%20problems%20will%20arise
#include "Stack.cpp"

int main()
{
    // Creates a stack of doubles, which is class-template specialization of the Stack template class
    Stack<double> doubleStack(5);
    doubleStack.push(10.5);
    doubleStack.push(35.0);
    doubleStack.push(45.5);

    // Pops elements from doubleStack 
    cout << "Stack of type double contains:" << endl;
    double element;

    if (doubleStack.pop(element))
        cout << element << endl;
    if (doubleStack.pop(element))
        cout << element << endl;
    if (doubleStack.pop(element))
        cout << element << endl;

    // Creates a stack of integer, which is class-template specialization of the Stack template class
    Stack< int > intStack;
    intStack.push(10);

    intStack.push(5);
    intStack.push(15);

    cout << "\nStack of type int contains:" << endl;
    int value;
    if (intStack.pop(value))
        cout << value << endl;

    if (intStack.pop(value))
        cout << value << endl;

    return 0;
}