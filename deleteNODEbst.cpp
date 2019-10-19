
//function to find the minimum value node in the sub tree


struct Node* minvalue(struct Node * root){
    struct Node* current=root;
    
    while(current->left!=NULL)
        current=current->left;
    
    return current;
}

//function for performing the deletion

Node *deleteNode(Node *root,  int x)
{
    if(!root)
        return root;
    
    //traverse according to the value of the key
            
    if(x<root->data)
        root->left= deleteNode(root->left,x);
    
    else if(x>root->data)
        root->right=deleteNode(root->right,x);
        
        
    //in case the node has only one child, copy 
    //the value of the child to the node
    //and delete the child
    
    else{
        if(!(root->left)){
            struct Node* temp=root->right;
            free(root);
            return temp;}
            
            
        else if(!(root->right)){
            struct Node* temp=root->left;
            free(root);
            return temp;}
            
    
    //In case the node has two children
    //copy the value of the inorder successor to the node
    //and delete the node
    
    
    
    //copy the value of the inorder succesor
    struct Node* temp=minvalue(root->right);
    
    root->data=temp->data;
    
    //delete the inorder successor
    
    root->right=deleteNode(root->right,temp->data);
    
    }
    
    return root;
    
}
