#include<iostream>
#include<stdbool.h>
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

void checkEqualLinkedList(node* head, node* head2){
    int a = 0;
    node* temp = head;
    node* temp2 = head2;
    while(temp!=NULL && temp2!=NULL){
        if(temp->val != temp2->val){ 
            a = 1;
            break;
        }   
        temp = temp->next;
        temp2 = temp2->next;
    }
    if(a==1) cout<<"both linkedlist are different";
    else cout<<"equal linkedlist";
    
}
 

 int main(){
    node* head = NULL;
    node* head2 = NULL;

    insertAtHead(head,5);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    display(head);

    insertAtHead(head2,1);
    insertAtHead(head2,2);
    insertAtHead(head2,3);
    insertAtHead(head2,4);
    display(head2);
   // checkEqualLinkedList(head,head2);

    return 0;
 }
