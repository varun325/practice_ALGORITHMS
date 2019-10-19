//deleting the nodes greate than k
//doesn't free the memory and justswaps the pointers

Node* deleteNode(Node* root, int key)
{
    if(!root)
        return NULL;
        
    root->left=deleteNode(root->left,key);
    root->right=deleteNode(root->right,key);
    
    if(root->data>=key){
        root=root->left;
    }
    return root;
}
