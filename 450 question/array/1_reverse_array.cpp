#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int s=0;
	    int e=n-1;
	    
	    while(s<=e){
	        swap(arr[s++],arr[e--]);
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }cout<<endl;
	}
	return 0;
}