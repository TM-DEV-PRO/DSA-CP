
 
#include <bits/stdc++.h> 
#include <vector>
using namespace std; 
 bool isper(long int l,long int r,long int x){
        if(r>=l){
            long int mid=l+(r-l)/2;
            if((mid*mid)==x)return true;
            else if((mid*mid)>x)return isper(l,mid-1,x);
            else return isper(mid+1,r,x);
        }
        return false;
    }

void CalSum(long int arr[], long int m, long int prefixSum[]) 
{ 
      prefixSum[0] = arr[0]; 
  
    
    for (int c = 1; c < m; c++) 
        prefixSum[c] = prefixSum[c-1] + arr[c]; 
} 
  

int main() 

{ 
     int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long int n;
        cin>>n;
        long int arr[n];
        for(int j=0;j<n;j++){
            long int x;
            cin>>x;
            arr[j]=x;
        }
     
    long int m = sizeof(arr) / sizeof(arr[0]);
    long int prefixSum[m]; 
  
    CalSum(arr, m, prefixSum); 
    m = sizeof(prefixSum) / sizeof(prefixSum[0]);
    long int ans=0;
    for(int i1=0;i1<m;i1++){
        for(int i2=i1+1;i2<m;i2++){
            long int l1=prefixSum[i2]-prefixSum[i1];
            // cout<<l1<<" ";
            if(isper(1,l1,l1)==true || l1==0)ans++;
        }
    }
    // cout<<endl;
    for(int i1=0;i1<m;i1++){
        long int l2=prefixSum[i1];
        // cout<<l2<<" ";
            if(isper(1,l2,l2)==true || l2==0)ans++;
    }
    // cout<<endl;
    //  for(int i1=0;i1<m;i1++)cout<<prefixSum[i1]<<" ";
    //  cout<<endl;
    cout<<ans<<endl;
       
    }
    return 0;
}
    