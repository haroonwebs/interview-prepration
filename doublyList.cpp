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

    //function to pop_front means deleting a node from start of the list.
   void pop_front(){
      Node* temp = head; // created a temporary pointer because deleting node is created in the dynamic memory location so to delete that we need to create pointer. also creating that temp is the head of the node.
      head= head->next; // head to the next node becouse if we deleted the node without creating another head then we lost our control over list in the memory.
      if(head != NULL){// if head is already null means list is not exist. 
            head->prev= NULL; // newly created head points to the previous node and distroying the connection. 
            temp->next=NULL;//we also have previouse head data which is in temp pointer. temp->next == NULL means distroying the connection between the previous and newly head.
            delete temp;// when connections are distroyed then this line clear the node from the memory.
      }
   }

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
   dl.push_front(7);
   dl.pop_front();
   dl.pop_front();
   dl.printList();
};