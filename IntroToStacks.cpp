#include<iostream>
#include<vector>
using namespace std;


// create stacks using vectors

class Stack
{
	vector<int> vec;
	public:
	push(int val) //0(1)
	{
		vec.push_back(val);
	}
	
	void pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty. "<<endl;
		}
		vec.pop_back();
	}
	
	int top()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty. "<<endl;
			return -1;
		}
		int lastIdx = vec.size()-1;
		return vec[lastIdx];
	}
	
	bool isEmpty()
	{
		return vec.size() == 0;
	}
};

int main()
{
	
	Stack s;
	
	s.push(3);
	s.push(2);
	s.push(1);
	
	while(!s.isEmpty())
	{
		cout<<s.top()<<" "<<endl;
		s.pop();
	}
	
	return 0;
}