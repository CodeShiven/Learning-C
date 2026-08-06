# include <iostream>
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

    void insertAtPos (Node* &head, int value, int pos){
            Node* newNode = new Node(value);
            if(head == nullptr && pos == 1){
                head = newNode;
            } else {
                Node* temp = head;
                int count = 1;
                while(count < pos -1){
                    temp = temp -> next;
                    count++;
                }
            }
    }       