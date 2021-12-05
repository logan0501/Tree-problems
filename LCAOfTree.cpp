#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

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

Node* lca(Node* root ,int n1 ,int n2 )
{
      if(!root)return NULL;
      if(root->data==n1 || root->data==n2)return root;
      Node* lca1=lca(root->left,n1,n2);
      Node* lca2=lca(root->right,n1,n2);
      if(lca1 && lca2)return root;
      if(lca1)return lca1;
      else return lca2;
}
int main(){

    return 0;
}