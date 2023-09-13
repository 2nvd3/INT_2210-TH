#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;
public:
    LinkedList() : head(NULL) {}

    void insert(int p, int x) {
        Node* newNode = new Node();
        newNode->data = x;
        if (p == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 0; temp != NULL && i < p - 1; i++) {
                temp = temp->next;
            }
            if (temp != NULL) {
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }

    void deleteNode(int p) {
        if (head == NULL)
            return;
        Node* temp = head;

        if (p == 0) {
            head = temp->next;
            delete temp;
            return;
        }

        for (int i=0; temp!=NULL && i<p-1; i++)
             temp = temp->next;

        if (temp == NULL || temp->next == NULL)
             return;

        Node *next = temp->next->next;

        delete temp->next;

        temp->next = next;
    }

    void printList() {
        Node* node = head;
        while (node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    int n, p, x;
    string op;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> op;
        if(op == "insert") {
            cin >> p >> x;
            ll.insert(p, x);
        } else if(op == "delete") {
            cin >> p;
            ll.deleteNode(p);
        }
    }

    ll.printList();

    return 0;
}
