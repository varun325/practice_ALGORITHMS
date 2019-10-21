Node* LCA(Node *root, int n1, int n2)
{
   if(!root)
    return root; //check if the root is null
    
    if(root->data<n1&&root->data<n2)  //if the given node is smaller than two nodes move to right sub tree
        return LCA(root->right,n1,n2);
        
        
    else if(root->data>n1&&root->data>n2) //if the given node is greater than the two nodes move to the left sub tree
        return LCA(root->left,n1,n2);
    
    return root; //return the node if it is the ancestor of both that is smaller than one and greater than the other
}
