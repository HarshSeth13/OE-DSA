//Harsh Seth
//ECE - 2nd Year
//21105103

//Ans (1)
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void append(Node*&head,int data){ //creating a function to insert a node at the end of linked list
    Node*temp=head;
    Node*new_node=new Node(data);
    if(temp==NULL){head=new_node;new_node->next=head;return;}
    while(temp->next!=head){temp=temp->next;}   
    temp->next=new_node;
    new_node->next=head;
}

void print(Node*&head){ //creating a function to print elements of linked list from top to last node
    Node*temp=head;
    do{cout<<temp->data<<"->";temp=temp->next;}
    while(temp!=head);
}

int main(){
    Node*head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    print(head);
}
/*
With reference to above example of circular linked list.

Line 21 i.e. while(temp->next!=head){temp=temp->next;} establishes that the traversing element/variable has reached the first element.

We Know that in circular linked list last node of linked list points to head of that linked list, hence we can check if any node points to head of linked list then that node is the end of circular linked list.
*/


//Ans (2)  

/* 
The practical applications of a circular linked list are- 

1. Personal Computers :- In Personal Computers, multiple applications are running. All the running applications are kept in a circular linked list and the OS gives a fixed time slot to all for running.

2. Cache :- The browser cache which allows you to hit the BACK button

3. Round Robin :- Circular linked lists are used in Round Robin Scheduling

4. Implementation of Data Structure: Data structures such as stacks and queues are implemented with the help of the circular linked lists.

5. Computing Resources: Circular Linked Lists is used to manage the computing resources of the computer.

6. Photoshop :- Undo function uses the concept of circular linked list.
*/



