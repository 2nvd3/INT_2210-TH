#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int value;
    Node *next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

/*class Queue {
public:
    Node *head; //front
    Node *rear; //rear

    void enqueue(int x) {
        Node *newNode = new Node(x);

        if(rear == NULL) {
            head = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if(head == NULL) {
            return;
        }
        head = head->next;
        if(head==NULL) {
            rear = NULL;
        }
    }

    void print() {
        Node *node = head;
        while(node->next!=NULL) {
            cout<<node->value<<" ";
            node = node->next;
        }
        cout<<endl;
    }
};*/

class Queue {
private:
    vector<int> v;
public:
    void enqueue(int x) {
        v.push_back(x);
    }

    void dequeue() {
        v.erase(v.begin());
    }

    void print() {
        for(int i=0;i<v.size();i++) {
            cout<<v[i]<<" ";
        }
    }
};

int main() {
    Queue q;

    int n;
    cin>>n;
    while(n--) {
        int x;
        string op;
        cin>>op;
        if(op=="enqueue") {
            cin>>x;
            q.enqueue(x);
        }else if(op=="dequeue") {
            q.dequeue();
        }
    }
    
    q.print();
	
    return 0;
}
