#include <bits/stdc++.h>

using namespace std;
class BST{
    int data;
    BST *left,*right;
public:
    // Default constructor.
    BST();

    // Parameterized constructor.
    BST(int);

    // Insert function.
    BST* Insert(BST*, int);

    // Inorder traversal.
    void Inorder(BST*);
};
BST::BST()
    :data(0),left(NULL),right(NULL)
{}
BST::BST(int x) {
    data=x;
    left=right=NULL;
}

BST *BST::Insert(BST *root, int x) {
    if(!root) return new BST(x);
    if(root->data<x) root->right=Insert(root->right,x);
    else if(root->data>x)root->left=Insert(root->left,x);
    else return root;
}
void BST::Inorder(BST *root) {
    if(!root)   return;
    cout<<root->data<<" ";
    Inorder(root->left);

    Inorder(root->right);
}
int main(){
    BST b,*root=NULL;
    root= b.Insert(root,20);
    b.Insert(root,10);
    b.Insert(root,50);
    b.Insert(root,40);
    b.Insert(root,30);
    b.Inorder(root);
    return 0;
}
