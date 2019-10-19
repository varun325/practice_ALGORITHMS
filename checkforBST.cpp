
//use inorder traversal to push elements in the vector
Node* inOrder(vector<int> &in, Node *root){
    if(!root)
        return root;
    
    inOrder(in,root->left);
    in.push_back(root->data);
    inOrder(in,root->right);
    
}

bool isBST(Node* root) {
    
    bool flag=true;
    vector<int> in;
    vector<int> in2;
    inOrder(in,root);//store elements in first vector
    inOrder(in2,root);//store elements in the secomd vector
    
    sort(in.begin(),in.end());//sort the first vector
    
    for(int i=0;i<in.size();i++){
        if(in[i]!=in2[i])
            {
                flag=false; //if both vectors don't have the same elements, bst property is not followed
                break;
            }
    }
    
    return flag;
}
