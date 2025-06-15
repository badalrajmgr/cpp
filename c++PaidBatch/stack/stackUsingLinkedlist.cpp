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

class stack{
    int top;
    int currentsize;
    int capacity;

    stack(int data){
        capacity = data;
        top = -1;
    }
    
    void insertAtHead(int data, node* &head){
        node* new_node = new node(data);
        new_node->next = head;
        head = new_node;
    }

    void deleteHead(node* &head){
        node* temp = head;
        head = head->next;
        delete temp;
    }

    void display(node* head){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->value<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    node* head = NULL;

    // insertAtHead(1,head);
    // insertAtHead(2,head);
    // insertAtHead(3,head);
    // insertAtHead(4,head);
    // insertAtHead(5,head);
    // display(head);
    // deleteHead(head);
    // display(head);

    stack st(5);


    return 0;
}