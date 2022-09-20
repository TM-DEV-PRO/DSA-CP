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
int strStr(const string A, const string B) {
    // A is haystack and B is needle
    if(B.length()>A.length() || A.empty() || B.empty())return -1;
    for(int i=0;i<=A.length()-B.length();i++){
        int flag=1;
        for(int j=i,k=0;k<B.length();j++,k++){
            if(A[j]!=B[k]){
                flag=0;
                break;
            }
        }
        
        if(flag==1)return i;
    }
    
    return -1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}