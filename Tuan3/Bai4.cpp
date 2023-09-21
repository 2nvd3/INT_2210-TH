#include<iostream>
using namespace std;

struct Node {
	int value;
	Node *next;
	Node(int value) {
		this->value = value;
		this->next = NULL;	
	}
};

class Queue {
public:
	Node *front, *rear;
public:
	Queue() {
		front = rear = NULL;
	}	
	
	//time complexity O(1)
	void enqueue(int value) {
		Node *newNode = new Node(value);
		
		if(rear==NULL) {
			front = rear = newNode;
			return;
		}
		rear->next = newNode;
		rear = newNode;
	}
	
	//time complexity O(1)
	void dequeue() {
		if(front==NULL) return;
		Node *temp = front;
		front = front->next;
		if(front==NULL) rear=NULL;
		delete(temp);
	}
};

int main() {
	Queue q;
	q.enqueue(20);
	q.enqueue(60);
	q.dequeue();
	if(q.front!=NULL) cout<<q.front->value;
	return 0;
}
