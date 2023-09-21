#include<iostream>
using namespace std;

class Stack {	
private:
	int top;
public:
	int a[100];
	Stack() {
		top=-1;
	}
	
	//time complexity O(1)
	void push(int value) {
		a[++top] = value;
	}
	
	//time complexity O(1)
	void pop() {
		int x = a[top--];
	}
	
	//time complexity O(1)
	bool empty() {
		return (top<0);
	}
	
	
	//time complexity O(1)
	int first() {
		int x = a[top];
		return x;
	}
};

int main() {
	Stack s;
	s.push(20);
	s.push(50);
	s.pop();
	if(!s.empty()) cout<<s.first();
	return 0;
}
