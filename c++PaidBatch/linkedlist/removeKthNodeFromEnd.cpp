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

void display(node* head){
    while(head != NULL){
        cout<<head->value<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

void deleteKthElement(node*head,int k){
    node* temp = head;
    node* temp2 = head;
    while(k>=0){
        temp2 = temp2->next;
        k--;
    }
    while(temp2 != NULL){
        temp = temp->next;
        temp2 = temp2->next;
    }
    temp->next = temp->next->next;
}

int main(){
    node* head = NULL;
    
    insertAtHead(head,9);
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);

    display(head);

    deleteKthElement(head,4);

    display(head);


    return 0;
}