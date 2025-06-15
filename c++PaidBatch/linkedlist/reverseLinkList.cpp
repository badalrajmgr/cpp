#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* next;

    node(int data){
        value = data;
        next = NULL;
    }
};

void insertAtHead(node* &head, int value){
    node* new_node = new node(value);
    new_node->next = head;
    head = new_node;
}
void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

void ReverseLinkList(node* &head){
    
}
 
int main(){
    node* head = NULL;
    for(int i=10;i>=1;i--){
        insertAtHead(head,i);
    }
    display(head);
}