//write a program to implement doubly linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
}; 

class LinkedList{
    public:
    Node* head = NULL;
    void insertAtHead(int val){
        Node* new_node = new Node(val);
        new_node->right = head;
        if(head != NULL) head->left = new_node ;
        head = new_node;   
    }
    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->right;
        }
    }
};

int main(){
    LinkedList LL;
    for(int i=1;i<=5;i++) LL.insertAtHead(i);
    
    LL.display();
    return 0;
}


