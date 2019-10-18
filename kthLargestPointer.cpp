

void kthLargesthelper(Node *root,int &k){ //static is delared for the whole program
                                        //so we use similar approach using another function
                                        //and pointer
    if(!root)
        return;
    
    kthLargesthelper(root->right,k);
    
    if(!(--k))
        cout<<root->key<<"\n";
        
    kthLargesthelper(root->left,k);
    
}

void kthLargest(Node *root, int k)
{
    int x=k;
    kthLargesthelper(root,x);
    
}
