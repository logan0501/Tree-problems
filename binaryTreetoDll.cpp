#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1

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

class Solution
{
    public: 
    Node* prev=NULL;
    Node * bToDLL(Node *root)
    {   
       if(!root)return root;
        Node* head = bToDLL(root->left);
        if(!prev)head=root;
        else{
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        bToDLL(root->right);
        return head;
    }
};

int main(){

    return 0;
}