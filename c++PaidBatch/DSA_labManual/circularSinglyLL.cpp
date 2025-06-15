//write a program to implement circular single linked list
#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        next = NULL;
    }
};

class LinkedList{
    public:
    node* head = NULL;
   
    void insertAtHead(int val){
        node* new_node = new node(val);
        new_node->next = head;
        head = new_node;
    }

    bool is_circular(){
        node* slow = head;
        node* fast = head;
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                cout<<"circular linkedlist";
                return true;
                break;
            }
        }
        cout<<"not circular linkedlist";
        return false;
    }

    void display(){
        node* slow = head;
        node* fast = head;
        while(slow!=fast){
            cout<<slow->val<<" ";
            slow = slow->next;
            fast = fast->next->next;
        }
    }
};

int main(){
    LinkedList LL;
    for(int i=1;i<=5;i++) LL.insertAtHead(i);
   LL.is_circular();
    LL.display();
}