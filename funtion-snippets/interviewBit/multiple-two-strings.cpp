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
string multiply(string A, string B) {
    
    
    string nums1=A,nums2=B;
    int l1 = nums1.size();
        int l2 = nums2.size();
        string str( l1 + l2, '0');            
        for(int i = l1-1; i >= 0; i--){
            for(int j = l2-1; j >= 0; j--){
                int p = (nums1[i]-'0')*(nums2[j]-'0') + (str[i+j+1]-'0');
                str[i+j+1] = p%10 + '0';
                str[i+j] += p/10;
            }
        }
        for(int i = 0; i < l1+l2; i++)
            if(str[i] != '0')
                return str.substr(i);
        return "0";
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}