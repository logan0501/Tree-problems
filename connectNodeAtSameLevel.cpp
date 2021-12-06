#include<bits/stdc++.h>
using namespace std;


// Link - https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1

struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight; 
}; 
 void connect(Node *root)
{
    if(!root)return;
    queue<Node* > q;
    q.push(root);
    while(!q.empty()){
        Node* prev=NULL;
        int size=q.size();
        while(size--){
            Node* curr=q.front();
            q.pop();
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
            if(prev)prev->nextRight=curr;
            prev=curr;
        }
        prev->nextRight=NULL;
    }
}   
int main(){

    return 0;
}