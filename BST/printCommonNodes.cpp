
//simple approach just take order n time to push the node data of both the trees into two vectors
//later in order n^2 time you can print the common data from the two arrays;


Node* inorder(Node *root, vector<int> &in){
    
    if(!root)
        return root;
    
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
    
    return root;
}


void printCommon(Node *root1, Node *root2)
{
    vector<int> in1;
    vector<int> in2;
    inorder(root1,in1);
    inorder(root2,in2);
    
    for(int i=0;i<in1.size();i++){
       for(int j=0;j<in2.size();j++){
           if(in1[i]==in2[j]){
               cout<<in1[i]<<" ";
           }
       }
    }
       

}
