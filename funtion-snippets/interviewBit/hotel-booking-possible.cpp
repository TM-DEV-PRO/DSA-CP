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
bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    
    for(int i=0,j=0;i<arrive.size() && j<depart.size();){
        if(arrive[i]<depart[j]){
            K--;
            i++;
        }
        else if(arrive[i]>depart[j]){
            K++;
            j++;
        }
        
        else {
            i++;
            j++;
        }
        
        if(K<0) return false;
    }
    
    return true;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}