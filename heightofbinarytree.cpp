#include<bits/stdc++.h>
using namespace std;

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

int height(struct Node* node){
    if(!node)return 0;
    return max(height(node->left),height(node->right))+1;
}
int main(){

    return 0;
}