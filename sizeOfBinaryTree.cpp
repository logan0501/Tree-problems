#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/size-of-binary-tree/1/?category[]=Tree&page=1&query=category[]Treepage1

 struct Node
 {
     int data;
     Node* left;
     Node* right;
};

int getSize(Node* node)
{
          if(!node){
              return 0;
          }      
          return 1+getSize(node->left)+getSize(node->right);
}
int main(){

    return 0;
}