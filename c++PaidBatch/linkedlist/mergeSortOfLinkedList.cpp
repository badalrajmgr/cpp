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

void mergeSort(node* &head, node* &head2){
    node* temp = head;
    node* curr = head;
    node* temp2 = head2;
    while(curr->value <= temp2->value){
        temp = curr;
        curr = curr->next;
    }
    temp->next = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = curr;
}

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

int main(){
    node* head = NULL;
    node* head2 = NULL;
    node* head3 = NULL;
    insertAtHead(head,12);
    insertAtHead(head,11);
   
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    // insertAtHead(head,3);
    // insertAtHead(head,2);
    // insertAtHead(head,1);
    insertAtHead(head2,10);
    insertAtHead(head2,5);
    insertAtHead(head2,4);

    insertAtHead(head3,8);
    insertAtHead(head3,7);
    insertAtHead(head3,6);

    
    display(head);
    display(head2);
    display(head3);
    mergeSort(head,head2);
   // display(head);
    mergeSort(head,head3);
    display(head);
    return 0;
}