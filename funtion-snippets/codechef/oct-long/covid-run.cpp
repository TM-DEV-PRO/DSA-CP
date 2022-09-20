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

int lastManStanding(int N, int K){
    if(N==1)return 0;

    return (lastManStanding(N-1,K)+K)%N;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
std::cin>>test;
while(test)
{
    int N,K,X,Y;
    cin>>N>>K>>X>>Y;
//   if(N%2!=0)cout<<"YES\n";
//   else {
//       if(K%2!=0)cout<<"YES\n";
//       else{
//           ((X+Y)%2==0)?cout<<"YES\n":cout<<"NO\n";
//       }
//   }

    vector<int> infected(N,0);
    while(true){
        if(infected[X]==1)break;
        infected[X]=1;
        X=(X+K)%N;
    }
    
    (infected[Y]==1)?cout<<"YES\n":cout<<"NO\n";
test--;
}

return 0;
}