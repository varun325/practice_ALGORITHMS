
//nothing but a combination of two different problems
//delete a node from the bst and 
//insert a node into the bst





//function to find the minimum value node in the sub tree


struct node* minvalue(struct node * root){
    struct node* current=root;
    
    while(current->left)
        current=current->left;
    
    return current;
}

//function for performing the deletion

struct node *deleteNode(node *root,  int x)
{
    if(!root)
        return root;
    
    //traverse according to the value of the key
            
    if(x<root->key)
        root->left= deleteNode(root->left,x);
    
    else if(x>root->key)
        root->right=deleteNode(root->right,x);
        
        
    //in case the node has only one child, copy 
    //the value of the child to the node
    //and delete the child
    
    else{
        if(!(root->left)){
            struct node* temp=root->right;
            free(root);
            return temp;}
            
            
        else if(!(root->right)){
            struct node* temp=root->left;
            free(root);
            return temp;}
            
    
    //In case the node has two children
    //copy the value of the inorder successor to the node
    //and delete the node
    
    
    
    //copy the value of the inorder succesor
    struct node* temp=minvalue(root->right);
    
    root->key=temp->key;
    
    //delete the inorder successor
    
    root->right=deleteNode(root->right,temp->key);
    
    }
    
    return root;
    
}


//function to insert a node into the given bst.


node* insert(node* root, int data)
{
    
    if(!root)
     {root= new node(data);
     return root;}
    // Your code here
    
    if(data<(root->key))
        root->left=insert(root->left,data);
    if(data>(root->key))
        root->right=insert(root->right,data);
     return root; // this lines helps keep the parent the 
                    //parent and not exchange it with the child
                    //this is the return statement that is returned to the stack
}




struct node *changeKey(struct node *root, int oldVal, int newVal)
{
	root=deleteNode(root,oldVal);
	return insert(root,newVal);
}
