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
int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size()==0)
            return 0;
        int f=0;
        long int time = -1, ans=0,start=timeSeries[0];
        for(auto i:timeSeries){
            if(i<=time){
                time += duration - (time-i+1) ;
            }
            else {
                if(f==1)ans+=time-start+1;
                start=i;
                time=i+duration-1;
                f=1;
            }
        }
        
        ans+=time-start+1;
        return (int)ans;
    }

     int findPoisonedDuration2(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if(n==0)
            return 0;
        int time=0;
      for(int i=0;i<n-1;i++){
          time+=min(timeSeries[i+1]-timeSeries[i],duration);
      }
        return time + duration;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}