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
int isPalindrome(string A) {
    string act_string;
    for(auto ch:A){
        if((ch>='0' && ch<='9') || (ch>='a' && ch<='z'))act_string.push_back(ch);
        else if(ch>='A' && ch <='Z')act_string.push_back(ch+('a'-'A'));
    }
    
    int low =0, high = act_string.length()-1;
    
    while(low<high){
        if(act_string[low]!=act_string[high])return 0;
        low++;
        high--;
    }
    
    return 1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}