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

void insertAtTail(int value, node* &head){
    node* new_node = new node(value);

    node* temp = head;
    while(temp->next!=0){
        temp = temp->next;
    }
    temp->next = new_node;    
}

void insertAtHead(node* &head, int value){
    node* new_node = new node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtPosition(node* &head, int value, int position ){
    
    node* temp = head;
    int n=1;
    while(n < position-1){
        temp = temp->next;
        n++;
    }
    node* new_node = new node(value);
    new_node->next = temp->next;
    temp->next = new_node;


} 

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void updateAtPosition(node* &head,int value, int position){

    node* temp = head;
    int n=1;
    while(n < position){
        temp = temp->next;
        n++;
    }
    temp->value = value;
    
    //time complixity of updation is 'O(k)' where k is position
}

void deleteHead(node* &head){
    node* temp = head;
    head = head->next;
    //cout<<temp->value<<endl;
    //time complixity of deletion is 'O(1)'
}

void deleteTail(node* &head){
    node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;   
    }
    temp->next = NULL;
    //cout<<temp2;
}

void deleteAtPosition(node* &head, int position){

        //time complixity is 'O(n)' in wrost case

    if(position == 0){
        deleteHead(head);
        return;
    }

    node* temp = head;
    int n=1;
    while(n < position-1){
        temp = temp->next;
        n++;
    }
    temp->next = temp->next->next;
}

int main(){
    node* head = NULL;
    for(int i=9;i>=1;i--){
        insertAtHead(head,i);
       
    }
    display(head);
    
    insertAtTail(5, head);
    display(head);
    insertAtPosition(head,10,3);
    display(head);
    updateAtPosition(head,20,3);
    display(head);
    deleteHead(head);
    display(head);
    deleteTail(head);
    display(head);
    deleteAtPosition(head,3);
    display(head);
    
    return 0;

}