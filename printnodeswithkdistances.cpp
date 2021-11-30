#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
vector<int> v;
void calc(struct Node *root, int k){
    if(!root)return;
    if(k==0)v.push_back(root->data);
    else{
        Kdistance(root->left,k-1);
        Kdistance(root->right,k-1);
    }
}
vector<int> Kdistance(struct Node *root, int k)
{
    calc(root,k);
    return v;   
}
int main(){

    return 0;
}