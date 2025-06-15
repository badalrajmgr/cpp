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

int getLength(node* head){
    node* temp = head;
    int length = 0;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;   
}

node* moveHeadByK(node* abc , int k){
    node* temp = abc;
    while(k--){
        temp=temp->next;
    }
    return temp;
}

int interSection(node* head, node* head2){
    node* temp = head;
    node* temp2 = head2;

    //step1: calculate length of both linked lists
    int l1 = getLength(head);
    int l2 = getLength(head2);
    cout<<l1<<" "<<l2;

   // step2: find difference between linkedlist and move longer linkedlist ptr by k steps
    if(l1>l2){ //LL1 is longer
        int k = l1-l2;
        temp = moveHeadByK(head,k);
        temp2 = head2;
    }
    else{
        int k = l2-l1;
        temp = head;
        temp2 = moveHeadByK(head2,k);
    }
    //step3: compare ptr1 and ptr2 nodes
    while(temp){
        if(temp==temp2){
            cout<<endl<<temp->value;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    //cout<<endl<<"none";
    return 0;
}

int main(){
    node* head = NULL;
    node* head2 = NULL;

    insertAtHead(head,7);
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);

    insertAtHead(head2,8);
    insertAtHead(head2,9);

    display(head);
    display(head2);

    interSection( head, head2);
  
    return 0;   
}