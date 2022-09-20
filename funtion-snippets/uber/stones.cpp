#include<bits/stdc++.h>
using namespace std;
int temp[2000000];
int m = 0;
int solve(){
    int res = 0;
    for(int i=m;i>=0;i--){
        temp[i] = temp[i]+temp[i+1];
        res=max(res,temp[i]);
    }
    return res;
}
int countingStonesHire2020(vector<int> stones, vector<int> days) {
    memset(temp,0,sizeof(temp));
    int n = stones.size();
    for(int i=0;i<n;i++){
        int sd = i;
        int ed = days[i]+i;
        m = max(ed,m);
        temp[ed] += stones[i];
        temp[sd] -= stones[i];
    }
    
    return solve();
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}