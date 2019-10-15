#include <iostream>
#include<algorithm>
using namespace std;

//finding the middle element and printing it 
//and recursively applying it to both the left and right sub array

void printpre(int *arr,int beg,int end){
    if(beg>end) //check if there are no possible sub arrays
        return;
    
  int mid=(beg+((end-beg)/2)); //finding the index of the middle element
    cout<<arr[mid]<<" ";
    
    printpre(arr,beg,mid-1);
    printpre(arr,mid+1,end);
}

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    printpre(a,0,n-1);
	    cout<<endl;
	}
	return 0;
}
