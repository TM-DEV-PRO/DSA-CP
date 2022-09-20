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
int reverse(int A) {
    string str = to_string(abs(A));
    for(int i=0,j=str.length()-1;i<j;i++,j--){
        swap(str[i],str[j]);
    }
        //if(str.length()>10 || (str[0]-'0')>2 || str)
        // if(str=="2147483648" && A<0) return -2147483648;
        
        
        // if(str>"2147483647")return 0;
        
        // int ans = stoi(str);
        // ans = 0 - ans;
        // return ans;
        
        int res;
        try{
            res = stoi(str);
        }
        
        catch(...){
            return 0;
        }
        
        if(A<0){
            res=-res;
        }
        
        return res;
    
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}