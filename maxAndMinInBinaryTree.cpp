#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
int findMax(Node *root)
{
    if(!root) return INT_MIN;
    return max(max(findMax(root->left),findMax(root->right)),root->data);

}
int findMin(Node *root)
{
    if(!root) return INT_MAX;
    return min(min(findMin(root->left),findMin(root->right)),root->data);
}
int main(){

    return 0;
}