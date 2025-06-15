#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int a){
        this->val = a;
        this->next = NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;

}
void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){
    
    node* head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,5);
    insertAtHead(head,5);
    display(head);

}

