#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1

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

vector<int> findSpiral(Node *root)
{   
    vector<int> v;
    if(!root)return v;
    stack<Node*> s1,s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while (!s1.empty())
        {
            Node* curr=s1.top();
            s1.pop();
            v.push_back(curr->data);
            if(curr->right)s2.push(curr->right);
            if(curr->left)s2.push(curr->left);
        }
        while(!s2.empty()){
            Node* curr=s2.top();
            s2.pop();
            v.push_back(curr->data);
            if(curr->left)s1.push(curr->left);
            if(curr->right)s1.push(curr->right);
        }
        
    }
    return v;
}


int main(){

    return 0;
}