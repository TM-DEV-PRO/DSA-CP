#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
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
const long long  INF = 1e18L + 5;
long long int dp[101][100001];
long long int knapMemo(vector<long long int> &weight, vector<long long int> &value, long long int index, long long int cap){
    if(cap==0 || index==0) return 0;
    if(dp[index][cap]!=-1)return dp[index][cap];
    if(weight[index-1]>cap){
        return dp[index][cap]=knapMemo(weight,value,index-1,cap);
    }
    else {
        return dp[index][cap]=max(value[index-1]+knapMemo(weight,value,index-1,cap-weight[index-1]),knapMemo(weight,value,index-1,cap));
    }

}

long long int knapMemo2(vector<long long int> &weight, vector<long long int> &value, long long int index, long long int cap, long long int val){
    if(cap==0 || index==0) return val;
    //if(dp[index][cap]!=-1)return dp[index][cap];
    if(weight[index-1]>cap){
        return knapMemo2(weight,value,index-1,cap,val-value[index-1]);
    }
    else {
        return max(knapMemo2(weight,value,index-1,cap-weight[index-1],val),knapMemo2(weight,value,index-1,cap,val-value[index-1]));
    }

}

long long int knapTab(vector<long long int> &weight, vector<long long int> &value, long long int N, long long int cap){
    long long int tab[N+1][cap+1];

    for(int i=0;i<=cap;i++) tab[0][cap]=0;
    for(int i=0;i<=N;i++) tab[N][0]=0;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=cap;j++){
            if(weight[i-1]>cap)
                tab[i][j] = tab[i-1][cap];
            else{
                tab[i][j] = max(value[i-1]+tab[i-1][cap-value[i-1]],tab[i-1][cap]);
            }
        }
    }
    return tab[N][cap];
}

long long int knapTab2(vector<long long int> &weight, vector<long long int> &value, long long int N, long long int cap){
     long long int tab[cap+1]={0};
    
    

    for(long long int i=1;i<=N;i++){
        long long int temp[cap+1]={0};
    
        for(long long int j=1;j<=cap;j++){
            if(weight[i-1]<=j){
                temp[j] = max(value[i-1]+tab[j-weight[i-1]],tab[j]);
            }
            else temp[j] = tab[j];
            //cout<<tab[j]<<" ";
        }
        
        for(long long int k=0;k<=cap;k++){
            tab[k]=temp[k];
        }
        //cout<<endl;
    }

    return tab[cap];
}
long long int knapTab3(vector<long long int> &weight, vector<long long int> &value, long long int N, long long int cap, long long int val){
    long long int tab[val+1];
    for(auto &i:tab)i=INF;
    tab[0]=0;

    for(long long int i=1;i<=N;i++){
        
        for(long long int val_already=val-value[i-1];val_already>=0;val_already--){
           
            tab[val_already+value[i-1]]=min(tab[val_already+value[i-1]],tab[val_already]+weight[i-1]);
        }
        
    }
    long long int ans=0;
    for(long long int i=val;i>=0;i--){
        
        if(tab[i]<=cap){
            ans=i;
            break;
        }
    }


    return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int N,W,val=0;
cin>>N>>W;
vector<long long int> weight,value;
for(long long int i=1;i<=N;i++){
    long long int w, v;
    cin>>w>>v;
    weight.push_back(w);
    value.push_back(v);
    val+=v;
}
memset(dp,-1,sizeof(dp));
//cout<<knapMemo2(weight,value,N,W,val);
cout<<knapTab3(weight,value,N,W,val);
return 0;
}