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
int countBits(int num){
    int count=0;
    while(num){
        num = num&(num-1);
        count++;
    }
    
    return count;
}

int hammingDistanceNaive(const vector<int> &A) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            int xr = A[i]^A[j];
            int count = countBits(xr);
            ans = ((ans%1000000007) + (count%1000000007))%1000000007;
           
        }
    }
    return ans;
}




int hammingDistanceBetter(const vector<int> &A) {
  int ans=0;
  for(int i=0;i<32;i++){
      int setBits=0;
      for(int num:A){
          if((num&(1<<i))!=0)setBits++;
      }
      
      long long hum_dist = setBits*(A.size()-setBits)*2; // since (x,y) != (y,x), so '2' 
      
      ans = ((ans%1000000007) + (hum_dist%1000000007))% 1000000007;
  }
  return ans;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}