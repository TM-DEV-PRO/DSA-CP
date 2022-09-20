#include<bits/stdc++.h>
using namespace std;
long long int A,B,C,D;
long long int count1[64];
long long int count2[64];
long long int ans = 0;
long long int pw = 1;
long long int one = (long long int)1;
long long int md = 1000000007LL;

void fill(){
    for(long long int i=0;i<64;i++){
        for(long long int j=A;j<=B;j++){
            if((j&(one<<i))!=0)
                count1[i]++;
        }
        for(long long int j=C;j<=D;j++){
            if((j&(one<<i))!=0)
                count2[i]++;
        }
       //cout<<count1[i]<<" "<<count2[i]<<endl;
    }
}

void solve(){
    for(long long int i=0;i<64;i++){
        long long int e1 = ((count1[i]%md)*((D-C+1-count2[i])%md))%md;
        long long int e2 = ((count2[i]%md)*((B-A+1-count1[i])%md))%md;
        ans = (ans%md + ((pw%md)*((e1+e2)%md))%md)%md;
        pw*=2;
    }
}
int XorSumHire2020(int a, int b, int c, int d) {
    A=(long long int)a;
    B=(long long int)b;
    C=(long long int)c;
    D=(long long int)d;
    
    memset(count1,0,sizeof(count1));
    memset(count2,0,sizeof(count2));
    fill();
    solve();
    return ans;
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}