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
string countAndSayRecursive(int A) {
    if(A==1){
        return "1";
    }
    
    string temp = countAndSayRecursive(A-1);
    
    string res;
    
    int count =1;
    for(int i=1;i<temp.length();i++){
        if(temp[i]==temp[i-1])count++;
        
        else{
            res.push_back('0'+count);
            res.push_back(temp[i-1]);
            count=1;
        }
    }
    
    res.push_back('0'+count);
    res.push_back(temp[temp.length()-1]);
    return res;
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}