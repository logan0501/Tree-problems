#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

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

/* Naive solution
    int height(Node* root){
        if(!root)return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameter(Node* root) {
          if(!root)return 0;
          int d1 = 1+height(root->left)+height(root->right);
          int d2=diameter(root->left);
          int d3=diameter(root->right);
          return max(d1,max(d2,d3)); 
}*/

int res=0;
int height(Node* root){
    if(!root)return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    res=max(res,1+lh+rh);
    return 1+max(lh,rh);
}
int diameter(Node* root){
    height(root);
    return res;

}
int main(){

    return 0;
}