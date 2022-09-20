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
vector<int> wave(vector<int> &A) {
    sort(A.begin(),A.end());
    
    for(int i=0;i<A.size()-1;i+=2){
        swap(A[i],A[i+1]);
    }
    return A;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}