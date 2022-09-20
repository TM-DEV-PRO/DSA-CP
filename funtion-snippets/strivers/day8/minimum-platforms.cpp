#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
// O(nlogn)
int findPlatform(int arr[], int dep[], int n)
    {
    	
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int res = 0;
    	int count =0;
    	int i=0,j=0;
    	while(i<n && j<n){
    	  if(arr[i]<=dep[j]){
    	      count++;
    	      i++;
    	  }
    	  
    	  else{
    	      count--;
    	      j++;
    	  }
    	  
    	  res = max(res,count);
    	}
    	
    	return res;
    	
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}