#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

//heap creation
class Solution {
    int shiftdown(int node,int *p,int size){
         
        int *max=(p+node);
        int flag=0;
        if(2*node+1<size && *(p+(2*node+1))>*max){
            flag=1;
            max=(p+(2*node+1));}
        if(2*node+2<size && *(p+(2*node+2))>*max){
            flag=2;
            max=(p+(2*node+2));}
        
        if(*max==*(p+node))return 0;
        else {
            int temp=*(p+node);
            *(p+node)=*max;
            *max=temp;
            if(flag==1)return shiftdown(2*node+1,p,size);
            else return shiftdown(2*node+2,p,size);
           
        }
            
        
    }
    
         int Extractmax(int *p,int size){
        int max=*p;
        *p=*(p+size-1);
        *(p+size-1)=INT_MIN;
        shiftdown(0,p,size);
        return max;
        
    }
    
    
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size=nums.size();
        for(int i=floor((size-1)/2);i>=0;i--){
            shiftdown(i,&nums[0],size);
        }
        int max;
        for(int i=1;i<=k;i++){
            max=Extractmax(&nums[0],size);
        }
        
        return max;
        
    }
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}