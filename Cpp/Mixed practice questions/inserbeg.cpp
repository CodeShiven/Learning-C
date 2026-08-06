# include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class linkedList {
    public:
    Node* head;

    linkedList(){
        head = nullptr;
    }

   void insertAtBeginning(int data){
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
    }
   

    void printLlist(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
    }


};

int main () {

linkedList node1;


node1.insertAtBeginning(10);
node1.insertAtBeginning(20);
node1.insertAtBeginning(30);


node1.printLlist();


return 0;
}