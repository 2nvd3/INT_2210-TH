#include<iostream>
#include<stack>
using namespace std;

int main() {
	int n, x;
	cin>>n;
	stack<int> st;
	string op;
	for(int i=0;i<n;i++) {
		cin>>op;
		if(op=="push") {
			cin>>x;
			st.push(x);
		} else if(op=="pop") {
			st.pop();
		}
	}
	cout<<st.top()<<endl;
	while(!st.empty()) {
		cout<<st.top()<<" ";
		st.pop();
	}
	
}
