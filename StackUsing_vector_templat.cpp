#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Creating Stack using vector
template<class T>
class Stack
{
	vector<T>vec;
	public:
	void push(T val)
	{
		vec.push_back(val);
	}
	
	void pop()
	{
		// if(isEmpty())
		// {
		// 	cout<<"Empty Stack !";
		// 	return;
		// }
		vec.pop_back();
	}
	
	T top()
	{
		// if(isEmpty()) 
		// {
		// 	cout<<"Empty Stack !";
		// 	return -1;
			
		// }
		int lastidx = vec.size()-1;
		return vec[lastidx];
	}
	bool isEmpty(){
		return vec.size() == 0;
		
	}
};

int main()
{
	 Stack<string> s;
	 
	s.push("Choudhadry");
	s.push("Sandeep");
	s.push("Hello ji ");
	
	while(!s.isEmpty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
	
	return 0;
}
