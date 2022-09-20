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
long long fact(int n){
    if(n==0 || n==1) return 1;
    
    else return (n*fact(n-1))%1000003;
}

int findRank(string A) {
    if(A.empty())return 0;
    if(A.length()==1) return 1;
    int n = A.size();
    int check[256] = {0};
    for(auto ch:A)check[ch]++;
    
    for(int i=1;i<256;i++){
        check[i]+=check[i-1];
    }
    
   // long long m = fact(n);
    
    long long rank=1;
    int j=1;
    for(auto ch:A){
        int small = check[ch-1];
       // m = m/(n-j);
        //rank= ((rank%1000003) + (((small%1000003)*(m%1000003))%1000003))%1000003;
        
        rank+= ((small%1000003)*fact(n-j))%1000003;
        
        for(int k=ch;k<256;k++){
            check[k]--;
        }
        
        j++;
    }
    return rank%1000003;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}