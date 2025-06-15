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
class linkedlist{
    public:
    node* head = NULL;
    void insertAthead(int);
    void deleteHead();
    void display();
};
void linkedlist :: insertAthead(int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}
void linkedlist :: deleteHead(){
    node* temp = head;
    head = head->next;
    delete(temp);
}
void linkedlist :: display(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    linkedlist ll;
    for(int i=0;i<=5;i++) ll.insertAthead(i);
    ll.display();
    ll.deleteHead();
    ll.display();
    return 0;
}