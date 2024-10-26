#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
Node*prev;
Node(){
data=0;
next=NULL;
prev=NULL;
}
Node(int val){
data=val;
next=NULL;
prev=NULL;
}
};
void display(Node*head){
if (head==NULL){
cout<<"Link list is empty";
}
cout<<"Link List eLement"<<endl;
Node*temp=head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL";
}
void insertAtStart(Node*head,int val){
Node* n = new Node(val); 
n->next=head;
head->prev=n;
head=n;
}
void insertAtEnd(Node*head,int val){
Node* n = new Node(val); 
if(head==NULL) 
{
head = n ;
return;
} 
Node* temp = head; 
while(temp->next!=NULL) 
{ 
temp = temp -> next; 
} 
temp -> next =n;
n->prev=temp;
}
int main(){
int ch;
Node node1,node2,node3,node4;
Node*head=&node1;
int value;
cout<<"Enter value for node 1 ";
cin>>node1.data;
node1.prev=NULL;
node1.next=&node2;
cout<<"Enter value for node 2 ";
cin>>node2.data;
node2.prev=&node1;
node2.next=NULL;
display(head);
return 0;
}
