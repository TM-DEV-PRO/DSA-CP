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
int isPower(int A) {
    if(A==0)return 0;
    if(A==1)return 1;
    for(int i=2;i*i<=A;i++){
        double lg_i = log10(i);
        double lg_A = log10(A);
        //cout<<floor(lg_A/lg_i)<<" "<<ceil(lg_A/lg_i)<<endl;
        if((floor(lg_A/lg_i)==ceil(lg_A/lg_i)) && (floor(lg_A/lg_i)!=1)) return 1;
    }
    
    return 0;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}