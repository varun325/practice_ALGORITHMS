//to find if the given array is inorder traversal in one pass
//all you have to do is check if the next term is smaller than the current one any iteration 

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    bool flag=true;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    
	    for(int i=1;i<n;i++)
	        if(a[i-1]>a[i]||a[i-1]==a[i]) //because there was a special test case passing equal values
	           { 
	               flag=false;
	               break;
	            }
	        
	  if(flag)
	    cout<<"1"<<endl;
	  else
	    cout<<0<<endl;
	    
	    
	}
	return 0;
}
