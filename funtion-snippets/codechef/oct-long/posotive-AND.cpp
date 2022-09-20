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
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int test;
 std::cin>>test;
 while(test)
 {
     int N;
     cin>>N;
     if(N==1)cout<<1<<"\n";
     else if(ceil(log2(N))==floor(log2(N)))cout<<-1<<"\n";
     else{
         cout<<2<<" "<<3<<" "<<1<<" ";
         for(int i=4;i<=N;i++){
             if(ceil(log2(i))==floor(log2(i))){
                 cout<<i+1<<" "<<i<<" ";
                 i++;
             }
             else cout<<i<<" ";
         }
         cout<<"\n";
     }
 test--;
 }
return 0;
}