void printNearNodes(Node *root, int l, int h)
{
    if(!root)
        return;
        
     printNearNodes(root->left,l,h);
    
    if(root->data>=l&&root->data<=h)
        cout<<root->data<<" ";
        
     printNearNodes(root->right,l,h);
  
}
