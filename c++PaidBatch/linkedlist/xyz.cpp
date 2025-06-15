#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val){
    
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void display(node* &head){
     
     node* temp=head;
     while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
     }
     cout<<"NULL"<<endl;
}
 int main(){
    node* head = NULL;
    node* head2 = NULL;
    insertAtHead(head,2);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,1);
    display(head);
    insertAtHead(head2,1);
    insertAtHead(head2,0);
    insertAtHead(head2,33);
    insertAtHead(head2,6);
    display(head2);

    return 0;
 }
