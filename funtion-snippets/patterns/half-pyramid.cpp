#include <iostream>
using namespace std;

int main() {
	int n,r=1;
	cin>>n;
	while(n>0){
	    for(int i=r-1;i>=0 && n>0;i--){
	        cout<<n-i<<" ";
	        
	    }
	    n=n-r;
	    cout<<endl;
	    r++;
	}
	return 0;
}