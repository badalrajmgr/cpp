#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int data){
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
    
}

int sum(node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int size(node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int add(node* root){
    if(root==NULL) return 0;
    return root->val + add(root->left) + add(root->right);
}

int maxTree(node* root){
    if(root==NULL) return INT_MIN;
    int lmax = maxTree(root->left);
    int rmax = maxTree(root->right);
    return max(root->val,max(lmax,rmax));
}
int main(){
    // int n;
    // cout<<"value of root ";
    // cin>>n;
    node* root = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);

    root->left = b;
    root->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(root);
    cout<<endl;
    cout<<"sum of values of roots are : "<<add(root)<<endl;
    cout<<"size of tree : "<<size(root)<<endl;
    //cout<<" "
    maxTree(root);
    

}