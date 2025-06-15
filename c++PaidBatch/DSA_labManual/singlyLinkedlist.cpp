//write a program to implement single linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        this->val = data;
        next = NULL;
    }
}; 

class LinkedList{
    public:
    Node* head = NULL;
    void insertAtHead(int val){
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }
    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
    }
};

int main(){
    LinkedList LL;
    for(int i=1;i<=5;i++){
        LL.insertAtHead(i);
    }
    LL.display();
    return 0;
}


