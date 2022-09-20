#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res ;
long long int md = 1000000007LL;


vector<vector< long long int>> arr;
vector< long long int> child, child_sum, total;

void countPath(){
   int afg = 1;
}
void solve2( long long int idx){
    countPath();
    child[idx] = 1;
    long long sum=0,temp=0;
    for(auto i:arr[idx]){
        if(child[i]==0){
            solve2(i);
            temp = (temp%md + total[i]%md)%md;
            sum = (sum%md + (2%md*total[i]%md)%md)%md;
        }
    }

    child_sum[idx] = temp%md;
    total[idx] = (1%md+sum%md)%md;
  
    
}

void solve( long long int idx){
    countPath();
    child[idx] = 1;
    res = (res%md + child_sum[idx]%md)%md;
    for(auto i:arr[idx]){
        if(child[i]==0){
            solve(i);
            res = (res%md + ((md+(child_sum[idx]%md-total[i]%md))%md*total[i]%md)%md)%md;
            
        }
    }
    
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {   
        long long  n;
        cin>>n;
        countPath();
        res=0;
        arr.resize(n);
        child.resize(n);
        child_sum.resize(n);
        total.resize(n);
        for(long long  i=0;i<n-1;i++){
            long long u,v;
            cin>>u>>v;
            arr[u-1].push_back(v-1);
            arr[v-1].push_back(u-1);
        }

        solve2(0);
        child.clear();
        child.resize(n);
        solve(0);

        cout<<((res%md)+(n%md))%md<<endl;

        arr.clear();
        child.clear();
        child_sum.clear();
        total.clear();
    test--;
    }
return 0;
}