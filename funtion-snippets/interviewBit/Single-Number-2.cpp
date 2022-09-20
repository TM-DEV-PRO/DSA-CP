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
int singleNumber(const vector<int> &A) {
    string BITS = "";
    for(int i=31;i>=0;i--){
        int set_Bits=0;
        for(auto num:A){
            if(num&(1<<i))
                set_Bits++;
        }
        
        (set_Bits%3==0)?BITS.push_back('0'):BITS.push_back('1');
    }
   // cout<<BITS<<endl;
    int ans=0;
    for(int i=31;i>=0;i--){
        ans+= (BITS[i]-'0')*pow(2,31-i);
        //cout<<ans<<endl;
    }
    
    return ans;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}