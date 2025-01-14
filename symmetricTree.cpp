#include<bits/stdc++.h>
using namespace std;

// Link - https://leetcode.com/problems/symmetric-tree/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isMirror(TreeNode* root1,TreeNode* root2){
    if(!root1 && !root2)return true;
    if(root1 && root2 && root1->val == root2->val)return ( isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left));
    return false;
}

bool isSymmetric(TreeNode* root) {
    return isMirror(root,root);
}
int main(){

    return 0;
}