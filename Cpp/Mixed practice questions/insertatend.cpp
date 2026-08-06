# include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};
void insertAtEnd(Node* &head , int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
        }else {
            Node* temp = head;
            while(temp -> next != nullptr){
                temp = temp -> next;
            }
            temp-> next = newNode;
        }
      
}
  void deleteAtStart(Node* &head){
        if(head==nullptr){
            return;
        }
        Node* temp = head;
        head = temp->next;
        delete temp;
    }
    void deleteAtEnd(Node* &head) {
        if(head == nullptr){
            return;
        }
        if(head->next==nullptr){
            Node* temp = head;
            delete temp;
            head = nullptr;
            return;
        } else {
            Node* current = head;
            while(current ->next ->next!=nullptr){
                current = current->next;
            }
            Node* tempp = current -> next;
            current -> next = nullptr;
            delete tempp;
        }

    }



    void display(Node* head){
        Node* temp = head;
        while (temp != nullptr){
            cout<<temp -> data<<"->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    int main() {
        
    Node* head = nullptr;

    insertAtEnd(head,11);
    insertAtEnd(head,15);
    insertAtEnd(head,12);

    display(head);
    deleteAtStart(head);
    display(head);





    return 0;
    }