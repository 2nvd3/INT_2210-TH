#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
private:
    int n;
public:
    Node* head;

    LinkedList() {
        n = 0;
        head = NULL;
    }

    void insertNode(int pos, int data) {
        Node* newNode = new Node(data);

        if (pos == 0) {
            newNode->next = head;
            head = newNode;
        }
        else if (pos == n) {
            Node* prevNode = head;
            while(prevNode->next != NULL) {
                prevNode = prevNode->next;
            }
            prevNode->next = newNode;
        }
        else {
            Node* prevNode = head;
            for (int i = 0; i < pos; i++) {
                prevNode = prevNode->next;
            }
            Node* nextNode = prevNode->next;

            newNode->next = nextNode;
            prevNode->next = newNode;
        }
        n++;
    }

    void deleteNode(int pos) {
        if (pos == 0) {
            head = head->next;
        }
        else if (pos == n) {
            Node* prevNode = head;
            while(prevNode->next != NULL) {
                prevNode = prevNode->next;
            }
            prevNode->next = NULL;
        }
        else {
            Node* prevNode = head;
            for (int i = 0; i < pos; i++) {
                prevNode = prevNode->next;
            }
            prevNode->next = prevNode->next->next;
        }
        n--;
    }

    void print() {
        Node* node = head;
        while(node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }
};


int main() {
    int n;
    cin >> n;
    LinkedList l;
    while(n--) {
        string op;
        int p, x;
        cin >> op;
        if (op == "insert") {
            cin >> p >> x;
            l.insertNode(p, x);
        }
        else if (op == "delete") {
            cin >> p;
            l.deleteNode(p);
        }
    }
    
    l.print();
    
    return 0;
}
