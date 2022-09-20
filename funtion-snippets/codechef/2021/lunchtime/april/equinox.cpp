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
    int n,a,b;
    cin>>n>>a>>b;
    long long int sar=0, anu=0;
    while(n--){
        string str;
        cin>>str;
        char i = str[0];
        if(i=='E' || i=='Q' || i=='U' || i=='I' || i=='N' || i=='O' || i=='X')
            sar+=a;
        else  
            anu+=b;
        
    }
    if(sar==anu)
        cout<<"DRAW";
    else
        (sar>anu)?cout<<"SARTHAK":cout<<"ANURADHA";
    
    cout<<endl;
test--;
}
return 0;
}