#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

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
int Balanced(Node* root){
    if(!root)return 0;
    int lh=Balanced(root->left);
    if(lh==-1)return -1;
    int rh = Balanced(root->right);
    if(rh==-1)return -1;
    if(abs(rh-lh)>1)return -1;
    return max(rh,lh)+1;
}
bool isBalanced(Node *root)
{
    return Balanced(root)==-1?false:true;
}
int main(){
    return 0;
}