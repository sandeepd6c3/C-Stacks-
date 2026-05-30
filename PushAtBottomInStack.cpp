#include<iostream>
#include<stack>
using namespace std;

// Inserts val at the bottom of the stack using recursion.
void PushAtBottom(stack<int> &s , int val)
{
	// Base case: if stack is empty, this is the bottom position.
	if(s.empty())
	{
		s.push(val);
		return;
	}

	// Store the current top element and remove it temporarily.
	int temp = s.top();
	s.pop();

	// Recursively reach the bottom of the stack.
	PushAtBottom(s,val);

	// Put the removed elements back in their original order.
	s.push(temp);
}

int main()
{
	
	stack<int> s;
	
	// Push initial elements into the stack.
	s.push(3);
	s.push(2);
	s.push(1);
	
	// Add 100 at the bottom of the stack.
	PushAtBottom(s,100);
	
	// Print and remove all elements from top to bottom.
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	
	return 0;
}
