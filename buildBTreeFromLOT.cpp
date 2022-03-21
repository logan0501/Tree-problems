#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left,*right;
    Node(int x):data(x),left(NULL),right(NULL){}
};
Node* buildTreeFromLvl(vector<int> keys){
    int idx=0;
    Node* root=new Node(keys[idx]);
    idx++;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node* cur = q.front();
        q.pop();
        int l=keys[idx++],r=keys[idx++];
        if(l!=-1){
            cur->left=new Node(l);
            q.push(cur->left);
        }
        if(r!=-1){
            cur->right=new Node(r);
            q.push(cur->right);
        }
    }
    return root;
}
void lvlOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int s =q.size();   
    }
    
}
int main(){
    vector<int> keys={1,2,3,4,5,-1,6,-1,-1,7,-1,-1,-1,-1,-1};
    Node* root=buildTreeFromLvl(keys);
    return 0;
}