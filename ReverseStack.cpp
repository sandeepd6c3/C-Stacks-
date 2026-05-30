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

void ReverseStack(stack<int> &s)
{
	// Base case: an empty stack is already reversed.
	if(s.empty())
	{
		return;
	}

	// Remove the top element temporarily.
	int temp = s.top();
	s.pop();

	// Reverse the remaining stack.
	ReverseStack(s);

	// Put the removed element at the bottom to complete the reverse order.
	PushAtBottom(s,temp);
}

int main()
{
	
	stack<int> s;
	
	// Push initial elements into the stack.
	s.push(3);
	s.push(2);
	s.push(1);
	
	// Reverse the complete stack.
	 ReverseStack(s);
	 
	
	// Print and remove all elements from top to bottom.
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	
	return 0;
}
