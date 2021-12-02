#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1

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

int getMaxWidth(Node* root) {
    queue<Node*> q;
    q.push(root);
    int maxs=INT_MIN;
    while(!q.empty()){
        int size=q.size();
        maxs=max(size,maxs);
        for(int i=0;i<size;i++){
            Node* curr = q.front();
            q.pop();
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
    }
    return maxs;
}
int main(){

    return 0;
}