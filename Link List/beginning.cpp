#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;

//Constructor
Node(int data){
this->data=data;
this->next=NULL;
}
};

void insertionAtHead(node* &head,int d){
Node* temp=new Node(d);
temp->data=head;
head=temp;
}

void print(node* &head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp->temp->next;
}
cout<<endl;
}
int main()
{
    Node* node1=new Node(14);
    cout<<node1->data<<endl;
    Node* head=node1
    insertAtHead(head,20);
    print(head);
}
