#include<iostream>
using namespace std;

class Queue {
private:
	int front, rear, max;
	int *a;
public:
	Queue(int x) {
		front = rear = 0;
		max = x;
		a= new int;
	}	
	
	//time complexity O(1)
	void enqueue(int value) {
		a[rear] = value;
		rear++;
	}
	
	//time complexity O(n)
	void dequeue() {
		for(int i=0;i<rear-1;i++) {
			a[i]=a[i+1];
		}
		rear--;
	}
	
	bool empty() {
		if(front==rear) return true;
		else return false;
	}
	
	void print() {
		int i;
		for(int i=front;i<rear;i++) {
			cout<<a[i]<<" ";
		}
	}
};

int main() {
	Queue q(5);
	q.enqueue(20);
	q.enqueue(60);
	q.dequeue();
	if(!q.empty()) cout<<"no";
	else cout<<"yes";
	q.print();
	return 0;
}
