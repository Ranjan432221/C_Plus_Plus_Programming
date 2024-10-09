#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    struct node *left,*right;
};
Node* newNode(int item)
{
    Node* temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(Node* root)
{
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key;
        inorder(root->right);
    }
}
