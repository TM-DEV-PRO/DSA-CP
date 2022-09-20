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
int uniquePaths(int A, int B) {
    if(A==1 || B==1)return 1;
    int n = A+B-2;
    int k = A-1;
    
    unsigned long long int ans=1;
    for(int i=1;i<=k;i++){
         ans = (ans*(n-i+1))/i;

    }
    return ans;

     // m+n-2 C n-1 = (m+n-2)! / (n-1)! (m-1)! 
            // long long ans = 1;
            // for (int i = n; i < (m + n - 1); i++) {
            //     ans *= i;
            //     ans /= (i - n + 1);
            // }
            // return (int)ans;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}