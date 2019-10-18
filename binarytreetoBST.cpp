
Node *inorder(vector<int> &in,Node *root){ //store all the elements of the tree in a vector
    
    if(!root)
        return root;
    
    inorder(in,root->left);
    in.push_back(root->data);
    inorder(in,root->right);

}

void bst(Node *root, vector<int> &in, int &i){ //place the elements using the inorder traversal after sorting
    
    if(!root)
        return;
    
    bst(root->left,in,i);
    root->data=in[i++];
    bst(root->right,in,i);
}


Node *binaryTreeToBST (Node *root)
{
//approach is to save all the elements in a vaector,sort them and re-place them    
//Your code here
int i=0;
vector<int> in;
inorder(in,root);
sort(in.begin(),in.end());
bst(root,in,i);

return root;
}
