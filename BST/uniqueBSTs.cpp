//Find the number of unique binary trees that can be formed by using the given umber of keys.
//For a value to be root the combination(multiplication) of the number of subtrees in the left and right subtree would be 
//the number of unique binary trees given that that value is fixed as the root
//we will iterate through all the possible values that can be root and add the number of unique binary trees for each one of them.
//number of possible trees when the number of keys is 1 or less is 1

#include <iostream>
#include<algorithm>
using namespace std;

int countTrees(int numKeys) {

  if (numKeys <=1) {
    return(1);
  }
  else {
    // there will be one value at the root, with whatever remains
    // on the left and right each forming their own subtrees.
    // Iterate through all the values that could be the root...
    int sum = 0;
    int left, right, root;

    for (root=1; root<=numKeys; root++) {
      left = countTrees(root - 1); //number of keys in the left sub tree would be
                                    //keys minus the number of keys in right subtree minus 1
      
      
      right = countTrees(numKeys - root); //number of keys in right tree would be 
                                            //number of keys minus the keys till root

      // number of possible trees with this root == left*right
      sum += left*right;
    }

    return(sum);
  }
}

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int x= countTrees(n);
	    cout<<x<<endl;
	}
	return 0;
}
