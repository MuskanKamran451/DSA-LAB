#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
Node(){
data=0;
next=NULL;
}
Node(int val){
data=val;
next=NULL;
}
};
void insertAtMid(Node*head,int pos){
Node*temp=head;
int val;
 for (int i = 1; i < pos- 1 && temp != NULL; i++) {
 temp = temp->next;
 }
 if(pos<=1||temp->next==NULL){
 cout<<"Invalid Position";
}
else{
cout<<"Enter value for new node at position "<<pos<<" : ";
cin>>val;
Node*n=new Node(val);
n->next=temp->next;
temp->next=n;
}}
void print(Node*head){
if(head==NULL){
cout<<"Linklist is empty ";
}
Node*temp=head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}
int main(){
Node node1,node2,node3,node4,node5;
Node*head=&node1;
int stvalue,position;
cout<<"Enter value for node 1 ";
cin>>node1.data;
node1.next=&node2;
cout<<"Enter value for node 2 ";
cin>>node2.data;
node2.next=&node3;
cout<<"Enter value for node 3 ";
cin>>node3.data;
node3.next=&node4;
cout<<"Enter value for node 4 ";
cin>>node4.data;
node4.next=&node5;
cout<<"Enter value for node 5 ";
cin>>node5.data;
node5.next=NULL;
cout<<"Linklist values ";
print(head);
cout<<"Enter position for new node at ";
cin>>position;
insertAtMid(head,position);
cout<<"\nLinklist values ";
print(head);
return 0;
}