#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
int data;
Node* left;
Node* right;
Node(int val)
{
    data=val;
    right=left=NULL;
}
};
static int idx=-1;
//Building tree.
Node* buildTree(vector<int>preorder)
{
    idx++;
    if(preorder[idx]==-1)
    {
        return NULL;
    }
    Node* root=new Node(preorder[idx]);
    root->left=buildTree(preorder);   //Left
    root->right=buildTree(preorder);  //Right
    return root;
}

//preOrder Traversal
void preOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    preOrder(root);
    cout<<endl;
    
    return 0;
}