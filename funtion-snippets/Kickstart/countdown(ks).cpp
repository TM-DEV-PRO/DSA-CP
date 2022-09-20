#include<bits/stdc++.h>
#include<vector> 
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long int n, k;
        cin>>n>>k;
        vector<long int>nums;
        for(int j=0;j<n;j++){
            long int x;
            cin>>x;
            nums.push_back(x);
        }
        
        long int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==k){
                long int temp=k,c=0;
                j++;
               
                while(temp>1 && j<nums.size()){
                    if(temp-nums[j]==1){
                        temp=nums[j];
                        j++;
                    }
                    else break;
               
                    
                }
                
                if(temp==1)count++;
                j--;
            }
        }
        
        cout << "Case #"<<i<<": "<<count<<endl;
        
        
    }
    return 0;
    
    
    
}