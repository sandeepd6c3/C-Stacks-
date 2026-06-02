// #include<iostream>
// #include<vector>
// using namespace std;

// // Creating Stack using vector

// class Stack
// {
// 	vector<int> vec;
// 	public:
// 	void push(int val)
// 	{
// 		vec.push_back(val);
// 	}
	
// 	void pop()
// 	{
// 		if(isEmpty())
// 		{
// 			cout<<"Empty Stack !";
// 			return;
// 		}
// 		vec.pop_back();
// 	}
	
// 	int top()
// 	{
// 		if(isEmpty()) 
// 		{
// 			cout<<"Empty Stack !";
// 			return -1;
			
// 		}
// 		int lastidx = vec.size()-1;
// 		return vec[lastidx];
// 	}
// 	bool isEmpty(){
// 		return vec.size() == 0;
		
// 	}
// };

// int main()
// {
// 	Stack s;
// 	s.push(3);
// 	s.push(2);
// 	s.push(1);
	
// 	while(!s.isEmpty())
// 	{
// 		cout<<s.top()<<" ";
// 		s.pop();
// 	}
	
	
// 	return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

class Stack{

vector<int> v;
public:
void push(int val){
	v.push_back(val);
}

void pop(){
	if(isEmpty()){
		cout<<"Empty Stack !";
		return;
	}
	
	v.pop_back();
}
int top(){
	 if(isEmpty()){
		cout<<"Empty Stack !";
		return -1;
	}
	
	int lastIdx = v.size()-1;
	return v[lastIdx];
}

bool isEmpty()
{
	return v.size() == 0;
}

};


int main(){
	
	Stack st;
	
	st.push(3);
	st.push(1);
	st.push(2);
   
   while(!st.isEmpty()){
	   cout<<st.top()<<" ";
	   st.pop();
   }
	
	return 0;
}








//  Stack implementation Using Arrays =>

// #include<iostream>
// using namespace std;

// class Array
// {
// 	int arr[1000];
// 	int lastIdx = -1;
	 
// 	public:
	
// 	void push(int val)
// 	{
// 		lastIdx++;
// 		arr[lastIdx] = val;
// 	}
	
// 	void pop()
// 	{
// 		 if(lastIdx == -1)
// 		{
// 			cout << "Stack Empty!" << endl;
// 			return;
// 		}
// 		lastIdx--;
// 	}
// 	int top()
// 	{
// 		if(lastIdx == -1)
// 		{
// 			cout<<"Empty Stack !";
// 		}
// 		return arr[lastIdx];
// 	}
// 	bool isEmpty()
// 	{
// 		return lastIdx == -1;
// 	}
// };


// int main()
// {
	
// 	Array a;
	
// 	a.push(10);
// 	a.push(20);
// 	a.push(30);
// 	a.push(40);
// 	a.push(50);
	
// 	while(!a.isEmpty())
// 	{
// 		cout<<a.top();
// 		a.pop();
// 	}
	
// 	return 0;
// }