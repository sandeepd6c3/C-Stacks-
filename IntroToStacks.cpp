#include <iostream>
#include <vector>
using namespace std;

// Creating Stack using Vector

class Stack
{
private:
    vector<int> vec;   // Vector to store stack elements

public:

    // Push element into stack  -> O(1)
    void push(int val)
    {
        vec.push_back(val);
    }

    // Remove top element from stack
    void pop()
    {
        // Check if stack is empty
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
            return;
        }

        vec.pop_back();
    }

    // Return top element of stack
    int top()
    {
        // Check if stack is empty
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
            return -1;
        }

        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    // Check stack is empty or not
    bool isEmpty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    Stack s;

    // Inserting elements into stack
    s.push(3);
    s.push(2);
    s.push(1);

    // Printing and removing elements
    while (!s.isEmpty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}