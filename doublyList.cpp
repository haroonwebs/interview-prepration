#include <iostream>
#include <string>
using namespace std;


// class which is used to create Nodes objects in the list.
class Node {
    public:
       int data;
       Node* next;
       Node* prev;

       Node(int value){
        data=value;
        next = prev = NULL;
       };
};


class dublyList {
    Node* head;
    Node* tail;

    public: 
       dublyList (){
        head = tail = NULL;
       };


   // function to add a node at the front of the list .
   void push_front (int value){
           // crete new node
           Node* newNode = new Node(value); // this line creted the new node in dynamic memory locations;
           if(head == NULL){// if list already not exist, so there is no head or tail.
            head = tail = newNode;// this line assign the head and tail pointer to the newly created node. Now new node is the head and the tail of the list.
           }else {// if list is already exist then this block execute
            newNode->next = head;// this line creating the forword connection wait already existing head node.
            head->prev = newNode;// this line creating the backword connection of the head to newly created node.
            head = newNode;// because node is connected at the start of the list, so newly created node becomes the new head of the list.
           };
   };

   // function to add a node at the last of the link.
   void push_back(int value){
          Node* newNode = new Node(value);
          if(head==NULL){
            head = tail = newNode;
          }else{
            newNode->prev= tail;
            tail->next= newNode;
            tail = newNode; 
          }
   };

   void printList () {// this function is same as single list for tervers the list.
      Node* temp = head;// here we are creating the temporary poiner make it the head of the list. we can not run the head itself because list are non reverable itselt.
      while(temp != NULL){// while loop run as long as the temp gose to null.means temp reached list last node.
         cout << temp->data << " " "<->" " ";// this line displaying the value of the temp current iteration.
         temp = temp->next;// after displaying the current node data. the temp updated .link, in traditional array loops, after completing the current iteration we increment the next. i++
      };
   }
};








int main() {
   dublyList dl;
   dl.push_front(7);
   dl.push_front(12);
   dl.push_front(5);
   dl.push_front(7);
   dl.push_back(55);

   dl.printList();
};