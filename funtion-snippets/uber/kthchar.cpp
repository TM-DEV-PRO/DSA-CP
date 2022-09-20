#include<bits/stdc++.h>
using namespace std;
int l1,l2;
long long int l=0;
long int x=1;
int f=0;
long long int K;
string S,T;
string str = "";
void build(){
    K-=l;
    if(f==0){
        for(int i=0;i<x;i++)
            str+=S;
    }
    
    else{
        for(int i=0;i<x;i++)
            str+=T;
    }
}
void solve(){
    while(l<K){
        if(l+x*l1>=K){
            f=0;
            break;
        }
        else
            l+=x*l1;
        x++;
        if(l+x*l2>=K){
            f=1;
            break;
        }
        else{
            l+=x*l2;
        }
        
        x++;
    }
    
    build();
}
char KthCharacterHire2020(string s, string t, long long k) {
    l1=s.length();
    l2=t.length();
    K=k;
    S=s;
    T=t;
    solve();
    
    return str[(int)K-1];
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}