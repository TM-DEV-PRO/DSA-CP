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

bool isPalindrome(string str, int start, int end){
    if(start>=end)return true;

    if(str[start]!=str[end])return false;

    isPalindrome(str, ++start, --end);
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}