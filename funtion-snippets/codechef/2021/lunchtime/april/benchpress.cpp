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
    long long int n,w,wr;
    cin>>n>>w>>wr;
    unordered_map<long long int,long long int> count;
    string str = "NO";

    while(n--){
        long long int x;
        cin>>x;
        count[x]++;
    }

    if(wr>=w){
        str = "YES";
    }

    else {
        for(auto it=count.begin();it!=count.end();it++){
            wr+= ((it->first)*((it->second)-(it->second%2)));
            if(wr>=w){
                str = "YES";
            }
        }
    }

    cout<<str<<endl;

test--;
}
return 0;
}