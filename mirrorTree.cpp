#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/mirror-tree/1

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
void mirror(Node* node){
    if(!node)return;
    mirror(node->left);
    mirror(node->right);
    swap(node->left,node->right);
}
int main(){

    return 0;
}