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
string convert(string A, int B) {
    if(B==1)return A;
    vector<string> rows(B);
    int j=0,flag=0;
    for(auto ch:A){
        if(flag==0){
            rows[j].push_back(ch);
            j++;
            if(j==B){
                flag=1;
                j--;
            }
        }
        
        else if(flag==1){
            j--;
            rows[j].push_back(ch);
            if(j==0){
                flag=0;
                j=1;
            }
        }
    }
    
    string zigZag="";
    
    for(auto str:rows)zigZag+=str;
    
    return zigZag;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}