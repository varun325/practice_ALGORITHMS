Node* insert(Node* root, int data)
{
    
    if(!root)
     {root= new Node(data);
     return root;}
    // Your code here
    
    if(data<(root->data))
        root->left=insert(root->left,data);
    if(data>(root->data))
        root->right=insert(root->right,data);
     return root; // this lines helps keep the parent the 
                    //parent and not exchange it with the child
                    //this is the return statement that is returned to the stack
}
