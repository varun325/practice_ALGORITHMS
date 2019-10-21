//approach is to create a sorted vector of all the nodes
// using the inorder traversal
//later using the same sorted vector to create a tree using the pre order traversal


Node* inorder(Node *root, vector<Node*> &in){
    
    if(!root)
        return root;
    
    inorder(root->left,in);
    in.push_back(root);
    inorder(root->right,in);
    
    return root;
}

Node* Balanced(vector<Node*> &in,int start,int end){
    
    if(start>end)
        return NULL;
    
    int mid=(start+end)>>1;
    
    Node* temp=in[mid];
    
    temp->left=Balanced(in,start,mid-1);
    temp->right=Balanced(in,mid+1,end);
    
    return temp;
}


Node* buildBalancedTree(Node* root)
{
	vector<Node *> in;
	inorder(root,in);
	return Balanced(in,0,in.size()-1);
}
