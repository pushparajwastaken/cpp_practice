#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:int data;
    Node* left;
    Node * right;
     Node(int val){
        data=val;
        left=right=NULL;
    }
    
};
void levelOrder(Node *root){
    if(root==NULL)return ;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node * front =q.front();
        q.pop();
        cout<<front->data<<" ";
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=   NULL){
            q.push(front->right);
        }
    }
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    levelOrder(root);
    return 0;
}