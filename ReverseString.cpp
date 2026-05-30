#include<iostream>
#include<stack>
#include<string>
using namespace std;

// Reverses a string using a stack.
string ToReverse(string str) {
	
	string ans;
	stack<char> s;
	
	// Push each character of the string into the stack.
	for(int i=0; i<str.size(); i++)
	{
		s.push(str[i]);
		
	}

	// Pop characters from the stack to get them in reverse order.
	while(!s.empty())
	{
		char top = s.top();
		ans += top;
		s.pop(); 
	}

	// Return the reversed string.
	return ans;
}

int main()
{
	
	string str = "Sandeep";
	
	// Print the reversed string.
	cout<<"Reverse is :"<<ToReverse(str)<<endl;
	
	return 0;
}




// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// string ToReverse(string str)
// {
// 	string ans;
// 	stack<char> s;
	
// 	for(int i=0; i<str.size(); i++)
// 	{
// 		s.push(str[i]);
// 	}
	
// 	while(!s.empty())
// 	{
// 		char top = s.top();
// 		ans += top;
// 		s.pop();		
// 	}
// 	return ans;
// }

// int main()
// {
// 	string str = "dcba";
	
// 	cout<<"Reverse is : "<<ToReverse(str);
	
// 	return 0;
// }