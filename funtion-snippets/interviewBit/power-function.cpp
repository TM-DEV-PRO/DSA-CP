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
int pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(x==0)return 0;
    if(n==0)return 1 % d;
    long long int ans=1,base=x;
    while(n>0){
        
        if(n%2==0){
           base=(base*base)%d;
           n=n/2;
            
        }
        else {
          ans=(ans*base)%d;
          n--;
        }
        
    }
   if(ans<0)ans=(ans+d)%d;
   
   return ans;
    
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}