#include <bits/stdc++.h>
using namespace std;

// Link - https://leetcode.com/problems/binary-tree-postorder-traversal/

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    vector<int> v;
    void post(TreeNode* root){
        if(root){
            post(root->left);
            post(root->right);
            v.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        post(root);
        return v;
    }
};
int main()
{

    return 0;
}