#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
std::cin>>test;
while(test)
{
    int n;
    cin>>n;
    int n0=0,n1=0;
    string res = "NO",str;
    cin>>str;
    for(auto i:str){
        if(i=='0')
            n0++;
        else
            n1++;
        if(n1>=n0){
            res="YES";
            break;
        }
        
    }
    
    cout<<res<<endl;
test--;
}
return 0;
}