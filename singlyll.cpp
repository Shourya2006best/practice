#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void insertathead(node* &head,int data){
    node* temp=new node;
    temp->data=data;
    temp->next=head;
    head=temp;
}

void insertattail(node* &head,int data){
    node* temp=head;
   while(temp->next!=NULL){
    temp=temp->next;
   }
   node *tail=temp;
   node* newnode=new node;
   newnode->data=data;
   newnode->next=NULL;
   tail->next=newnode;
}

void insertatposition(int position,node* &head,int data){

    node* newnode=new node;
    newnode->data=data;
    
    if(position==1){
        newnode->next=head;
        head=newnode;
        return;
    }

    int i=1;
    node* temp=head;

    while(i<position-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void deletell(int position,node* &head){
    if(position==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
        int i=1;
        node* prev=NULL;
        node* curr=head;
        while(i<position){
            prev=curr;
            curr=curr->next;
            i++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(node* &head){
   node* temp=head;
   while(temp!=NULL){
    cout<<temp->data<<"  ";
    temp=temp->next;
   }cout<<endl;
}

int main(){

node* head=new node;
head->data=1;
head->next=NULL;
print(head);

insertathead(head,2);
print(head);

insertattail(head,3);
insertattail(head,3);
insertattail(head,3);
print(head);

insertatposition(2,head,4);
print(head);

deletell(2,head);
print(head);
deletell(1,head);
print(head);
deletell(4,head);
print(head);

    return 0;
}