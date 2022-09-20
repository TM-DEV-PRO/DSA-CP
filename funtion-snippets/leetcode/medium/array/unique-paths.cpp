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
  int uniquePaths(int m, int n) {
       long long int ans = 1;
       long long int t = m+n-2;
       long long int a =t;
    for(long long int  i=1;i<=a-max(m-1,n-1);i++){
        ans*=t--;
    }
    long long int d = 1;
    long long int x = min(m-1,n-1);
    a=x;
    for(long long int i=1;i<=a;i++){
        d*=x--;
    }
        
        return (int)(ans/d);
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}