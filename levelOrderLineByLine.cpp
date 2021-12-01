#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1

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

vector<vector<int>> levelOrder(Node* node)
{
  queue<Node *> q;
  vector<vector<int>> v;
  if(!node)return v;
  q.push(node);
  while(!q.empty()){
      int size = q.size();
        vector<int> temp;
      for(int i=0;i<size;i++){
         
          Node* curr = q.front();
          temp.push_back(curr->data);
          q.pop();
          if(curr->left)q.push(curr->left);
          if(curr->right)q.push(curr->right);
      }
      v.push_back(temp);
  }
  return v;
}

int main(){

    return 0;
}