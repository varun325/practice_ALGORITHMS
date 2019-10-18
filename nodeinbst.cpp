
//program to search a node in the given binary search tree

//do an OR gate of all the returns so that the final
//answer can correctly tell if the node was present or not

//if you do it wothout performing the or operations, final
//result will be the final node that is returned

bool search(Node* root, int x)
{   
    if(!root)
        return false;
        
    if(x==root->data)
        return true;
   // cout<<x<<" "<<root->data<<" ";
    return search(root->left,x)||search(root->right,x);
    //Your code here
}
