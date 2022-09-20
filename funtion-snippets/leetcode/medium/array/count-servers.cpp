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
 int countServers(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int row[251]={0},col[251]={0};
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              
                if(grid[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              
                if(grid[i][j]==1 && (row[i]>1 || col[j]>1)){
                    ans++;
                }
            }
        }
  
       return ans;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}