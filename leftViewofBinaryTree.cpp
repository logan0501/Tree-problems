#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

vector<int> leftView(Node *root)
{
   vector<int> v;
   if(!root)return v;
   queue<Node *> q;
   q.push(root);
   while(!q.empty()){
       int size=q.size();
       
       for(int i=0;i<size;i++){
           Node* curr = q.front();
           q.pop();
           if(i==0){
            v.push_back(curr->data);
            }
            
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
       }
   }
   return v;
}

int main(){

    return 0;
}