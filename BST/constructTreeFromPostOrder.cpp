
//Approach is to give an order n time solution by iterating the array with the node data each in order i time
//i being the instance of the given iteration

Node* construct(Node* root, int data){
    if(!root){
        root=new Node(data);
        return root;
    }
    
    if(data<(root->data))
        root->left=construct(root->left,data);
    if(data>(root->data))
        root->right=construct(root->right,data);
        
        return root;// this lines helps keep the parent the 
                    //parent and not exchange it with the child
                    //this is the return statement that is returned to the stack
                    
                    //important point to remeber for fututre is that the newer node will always somehow hit the leaf spot
                    
}

Node *constructTree (int post[], int size)
{
    Node* root=NULL;
    for(int i=0;i<size;i++)
        root=construct(root,post[i]);
        
    return root;

}
