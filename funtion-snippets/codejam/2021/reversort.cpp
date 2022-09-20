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
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
std::cin>>test;
int k=1;
while(k<=test)
{
    int n;
    vector<int> num(n);
    for(auto &i:num)
        cin>>i;
    map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[num[i]] = i+1;
    }

    int ans =0;
    int i=1;
    for(auto it=mp.begin();it!=mp.end();it++){
        ans+= it->first - i + 1;
        i++;
    }
    cout<<"Case "<<"#"<<k<<": "<<ans<<endl;
k++;
}
return 0;
}