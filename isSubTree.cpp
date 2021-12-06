#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/check-if-subtree/1

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

bool areIdentical(Node* T,Node* S){
        if(!T && !S)return true;
        if(!T || !S)return false;
        return (T->data==S->data && areIdentical(T->left,S->left) && areIdentical(T->right,S->right));
}
bool isSubTree(Node* T,Node* S){
    if(S==NULL)return true;
    if(T==NULL)return false;
    if(areIdentical(T,S))return true;
    return isSubTree(T->left,S) || isSubTree(T->right,S);
}
int main(){

    return 0;
}