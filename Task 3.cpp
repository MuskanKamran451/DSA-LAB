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
void deleteAtStart(Node*head){
 
Node* temp = head;
head=head->next;
if(head!=NULL){
head->prev->next=NULL;
}
delete temp;
}
void deleteAtEnd(Node*head){
 
Node* temp = head;
while(temp->next!=NULL) 
{ 
temp = temp -> next; 
} 
temp->prev->next=NULL;
delete temp;
}
int main(){
int ch;
Node node1,node2,node3;
Node*head=&node1;
int value;
cout<<"Enter value for node 1 ";
cin>>node1.data;
node1.prev=NULL;
node1.next=&node2;
cout<<"Enter value for node 2 ";
cin>>node2.data;
node2.prev=&node1;
node2.next=&node3;
cout<<"Enter value for node 3 ";
cin>>node3.data;
node3.prev=&node2;
node3.next=NULL;
display(head);
cout<<endl<<"Press 1 to delete at start"<<endl;
cout<<"Press 2 to delete at end"<<endl;
cin>>ch;
switch(ch){
case 1:
{
deleteAtStart(head);
display(head);
}
break;
case 2:
{
deleteAtEnd(head);
display(head);
}
break;
}
return 0;
}
