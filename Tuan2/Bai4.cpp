#include <iostream>
#include<queue>

using namespace std;

/*class Queue {
public:
	int *a;
	int head, tail, size,max=10;
	Queue() {
		a = new int[max];
		head = 0;
		tail = 0;
		size = 0;
	}
	
    void enqueue(int x) {
        tail = (tail+1)%max;
        size++;
        a[tail] = x;
    }

    void dequeue() {
    	if(!isEmpty()) {
    		size--;
    		head = (head+1)%max;
		}
    }
    
    void print() {
    	for(int i=0;i<size;i++) {
    		cout<<a[i]<<" ";
		}
	}
    
    bool isEmpty() {
    	return (size==0);
	}
};*/

int main() {
    queue<int> qq;
    int n, x;
    string op;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> op;
        if(op == "enqueue") {
            cin >> x;
            qq.push(x);
        } else if(op == "dequeue") {
            qq.pop();
        }
    }
	
	while(!qq.empty()) {
		cout<<qq.front()<<" ";
		qq.pop();
	}
	
}
