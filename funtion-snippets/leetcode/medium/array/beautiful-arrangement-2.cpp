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
vector<int> constructArray(int n, int k) {
        vector<int> res;
        int i=1,f=0,f2=0;
        while(res.size()!=n){
            res.push_back(i);
            if(f==0&&k!=0){
                i+=k;
                k--;
                f=1;
            }
            else if(f==1&&k!=0){
                i-=k;
                k--;
                f=0;
            }
            
            else{
               if(f2==0){
                   i=res[1];
                   f2=1;
               }
                
                i++;
            }
        }
        return res;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}