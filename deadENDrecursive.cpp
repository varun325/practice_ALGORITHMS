
bool isDeadhelper(Node *root, int min, int max){
    if(!root)
        return false;
    
    if(min==max)
        return true;
    
    return isDeadhelper(root->left,min,root->data-1)||isDeadhelper(root->right,root->data+1,max);
    
}

bool isDeadEnd(Node *root)
{
    return isDeadhelper(root,1,INT_MAX);
}


//works on the simple principle that the left subtree for any given range has values from
//1 to the data of the root minus 1 and right subtree has values from  root data plus 1 to infinity.
