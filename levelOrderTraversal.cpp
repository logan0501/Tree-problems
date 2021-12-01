#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/level-order-traversal/1

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

vector<int> levelOrder(Node* node)
{
    queue<Node*> q;
    vector<int> v;
    if(!node)return v;
    q.push(node);
    while(!q.empty()){
        Node* curr = q.front();
        v.push_back(curr->data);
        q.pop();
        if(curr->left)q.push(curr->left);
        if(curr->right)q.push(curr->right);
    }
    return v;

}

int main(){

    return 0;
}