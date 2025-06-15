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
    cout<<"NULL"<<endl;
}

void deleteDuplicateElement(node* &head){

    //time complexity is '0(n)'

    node* temp = head;
    node* current = head;

    while(current != NULL && current->next != NULL){
        while(current->value == current->next->value){
            temp = current->next;
            current->next = current->next->next;
            free(temp);
        }
        current = current->next;
    }
}

void printReverse(node* head){
    //base case
    if(head == NULL){
        return;
    }
    // recursive case
    printReverse(head->next);
    cout<<head->value<<" ";
}

int main(){
    node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,6);
    display(head);
    // deleteDuplicateElement(head);
    printReverse(head);
   

    return 0;
}