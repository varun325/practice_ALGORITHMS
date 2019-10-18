//the left most node is the minimum node in the BST, 
//the given approach return the root when it doesn't have a left child anymore

int minValue(Node* root)
{
    if(!(root->left))
        return root->data;
        
        minValue(root->left);
    // Code here
}
