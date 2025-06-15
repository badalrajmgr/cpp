#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int value;
    node* left;
    node* right;

    node(int data){
        value = data;
        left = NULL;
        right = NULL;
    }
};

node* builtTree(node* &root){
    
    cout<<" enter the data : ";
    int data;
    cin>>data;
    root = new node(data);

    if(data == 0){
        return NULL;
    }

    cout<<"Enter data for inserting in left of : "<< data << endl;
    root->left = builtTree(root->left);
    cout<<"Enter data for inserting in right of : "<< data << endl;
    root->right = builtTree(root->right);
    return root;
}

void preOrderTraversal(node* root){

    if(root==NULL){
        return;
    }

    cout<<root->value<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void nextline(){
    cout<<endl;
}

void inOrderTraversal(node* root){

    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->value<<" ";
    inOrderTraversal(root->right);
    //cout<<root->value;
}

void postOrderTraversal(node* root){

    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->value<<" ";
}

void levelOrderTraversal(node* root){

    if(root == NULL){
        return;
    }
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int nodesAtCurrentLevel = q.size();
        while(nodesAtCurrentLevel--){

            node* currNode = q.front();
            q.pop();

            
            if(currNode->left!=NULL){
                q.push(currNode->left);
            }
            if(currNode->right!=NULL){
                q.push(currNode->right);
            }
            cout<<currNode->value<<" ";
        }
        cout<<endl;
    }
}

int main(){
    node* root = NULL;
    builtTree(root);
    preOrderTraversal(root);
    nextline();
    inOrderTraversal(root);
    nextline();
    postOrderTraversal(root);
    nextline();
    levelOrderTraversal(root);

}