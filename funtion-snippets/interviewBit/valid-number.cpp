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
bool checkValid(string s) {

    bool digit = false;                     // to check if digits are present
    int i=0, j = s.length()-1;

    while(i<j && s[i] == ' ')        i++;   // skip trailing whitespaces
    while(j>=0 && s[j] == ' ')       j--;   // skip trailing whitespaces
    while(i <= j) {
        char it = s[i++];
        if(it>='0'&& it<='9') digit = true;
        else if(it=='-' || it=='+' || it=='.' || it == 'e');
        else    return false; // cases with any non-numeric(including intermediate whitespaces)
    }
    return digit;
}

int isNumber(const string A) {

    if(count(A.begin(), A.end(), '.')>1)    return 0; // cases like "1.2.3"
    if(count(A.begin(), A.end(), 'e')>1)    return 0; // cases like "1e2e3"
    int ePos = A.find('e');
    int dotPos = A.find('.');

    if(dotPos != string::npos)
        if(dotPos == A.length()-1)
            return 0;                                 // cases like "3."
        else if(ePos != string::npos && dotPos >= ePos-1)
            return 0;                                 // cases like "4.e3", "2e9.3"
    return checkValid(A);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}