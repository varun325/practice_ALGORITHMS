
Node *isDeadhelper(Node *root,vector<int> &in){
    
    if(!root)
        return root;
    
    isDeadhelper(root->left,in);
    in.push_back(root->data);
    isDeadhelper(root->right,in);
    
    return root;
}

bool isDeadEnd(Node *root)
{
    vector<int> in;
    bool x;
    isDeadhelper(root,in);
    for(int i=1;i<in.size();i++){
     //   cout<<in[i]<<" ";
        if(in[i]==in[i-1]+1&&in[i]==in[i+1]-1)
        {x=true;
        break;}
        
        x=false;
    }
    
    return x;
}


//fails on some test cases where the root has one of the values that could be possible dead end
