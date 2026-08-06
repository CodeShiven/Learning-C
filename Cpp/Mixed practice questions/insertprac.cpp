# include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }

};
class linkList {
    public:
       Node* head = nullptr;
    linkList(){
        head = nullptr;
    }

void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode; 

}
void printList(){
    Node* temp = head;
    while(temp != nullptr){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
}


};
int main() {

linkList node;

node.insertAtBeginning(20);
node.insertAtBeginning(45);
node.insertAtBeginning(11);
node.insertAtBeginning(79);
node.insertAtBeginning(36);

node.printList();


return 0;
}