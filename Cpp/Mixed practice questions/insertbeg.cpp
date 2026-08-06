# include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtStart(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode -> next = head;
    head = newNode; 
} 
void printList(Node* head) {
        Node* temp = head;

        while(temp != NULL) {
            cout<< temp -> data <<"->";
            temp = temp -> next;
        }
        cout<<"NULL";
}
int main () {
Node* head = NULL;

insertAtStart(head,20);
insertAtStart(head,25);
insertAtStart(head,15);
insertAtStart(head,21);

    printList(head);


return 0;
}