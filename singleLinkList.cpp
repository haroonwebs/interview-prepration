#include <iostream>
#include <string>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    };
};


class List {
private:
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int value) {
        Node* newNode = new Node(value); // new keyword help us to create dynamic object
        if(head == NULL){
           head = newNode;
        } else {
         newNode->next = head;
         head = newNode;
        }
    };

    void printLint(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    
};





int main () {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.printLint();
};