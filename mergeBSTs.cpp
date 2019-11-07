Node* inorder(Node *root, vector<int> &in){
    
    if(!root)
        return root;
    
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
    
    return root;
}

Node* insert(Node* root, int data)
{
    
    if(!root)
     {root= new Node(data);
     return root;}
    // Your code here
    
    if(data<(root->data))
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);
     return root; // this lines helps keep the parent the 
                    //parent and not exchange it with the child
                    //this is the return statement that is returned to the stack
}

 Node* inorderPrint(Node *root, int &i){
    
     if(!root)
         return root;
    
     inorderPrint(root->left,i);
     cout<<i++<<"-> ";
     cout<<root->data<<" ";
     inorderPrint(root->right,i);
    
     return root;
 }

/*You are required to complete below method */
void merge(Node *root1, Node *root2)
{   int i=0;
    vector<int> in;
    
    inorder(root2,in);
    
    for(int i=0;i<in.size();i++){
        insert(root1,in[i]);
    }
    
     inorderPrint(root1,i);
     cout<<endl;
}


//failing test case causes duplicacy

/*
46 15
368 435 365 44 751 88 809 277 179 789 585 404 652 755 400 933 61 677 369 740 13 227 587 95 540 796 571 435 379 468 602 98 903 318 493 653 757 302 281 287 442 866 690 445 620 441
730 32 118 98 772 482 676 710 928 568 857 498 354 587 966*/

/*

0-> 13 1-> 32 2-> 44 3-> 61 4-> 88 5-> 95 6-> 98 7-> 118 8-> 179 9-> 227 10-> 277 11-> 281 12-> 287 13-> 302 14-> 318 15-> 354 16-> 365 17-> 369 18-> 379 19-> 400 20-> 404 21-> 435 22-> 435 23-> 441 24-> 442 25-> 445 26-> 468 27-> 482 28-> 493 29-> 498 30-> 540 31-> 568 32-> 571 33-> 585 34-> 587 35-> 602 36-> 620 37-> 652 38-> 653 39-> 676 40-> 677 41-> 690 42-> 710 43-> 730 44-> 740 45-> 751 46-> 755 47-> 757 48-> 772 49-> 789 50-> 796 51-> 809 52-> 857 53-> 866 54-> 903 55-> 928 56-> 933 57-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966 1-> 966 

0-> 966.................*/
