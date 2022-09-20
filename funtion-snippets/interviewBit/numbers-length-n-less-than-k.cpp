#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;
int solve(vector<int> &A, int B, int C) {
    if(C==0 || B==0 || A.empty())return 0;
    
    if(floor(log10(C)+1)<B)return 0;
    
    int digits[10]={0};
    int check[10]={0};
    
    for(auto i:A){
        digits[i]=1;
        check[i]=1;
    }
    
    for(int i=1;i<10;i++)digits[i]+=digits[i-1];
    
    int n=digits[9];
    
     int ans=(B==1 && digits[0]==1)?1:0;
    
    if(floor(log10(C)+1)>B){
        
        ans+=(n-check[0])*((B-1==0)?1:pow(n,B-1));
        return ans;
    }
    //if(A.size()==1 && A[0]<C && B==1)return 1;
    
    string num = to_string(C);
    
   
    
    for(int i=0;i<B;i++){
     
        
        int x = num[i] - '0';
        int small = (x==0)?0:digits[x-1];
       // cout<<small<<" "<<x<<" "<<digits[0]<<" "<<n<<" "<<ans<<endl;
       if(small==0 && check[x]==0)break;
        if(i==0){
            small=small- check[0];
            ans+= small*((B-i-1==0)?1:pow(n,B-i-1));
        }
        else ans+= small*((B-i-1==0)?1:pow(n,B-i-1));
        
        if(check[x]==0)break;
    }
    return ans;
    
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}