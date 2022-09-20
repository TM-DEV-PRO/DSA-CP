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
vector<vector<int> > generateMatrix(int A) {
    
    vector<vector<int>> res(A,vector<int>(A,0));
    
    int top =0, right=A-1, bottom=A-1, left=0;
    int count=1;
    while(top<=bottom && left<=right){
        for(int i = left;i<=right;i++){
            res[top][i]=count;
            count++;
        }
        top++;
        
        for(int i=top;i<=bottom;i++){
            res[i][right]=count;
            count++;
        }
        right--;
        for(int i=right;i>=left;i--){
            res[bottom][i]=count;
            count++;
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            res[i][left]=count;
            count++;
        }
        left++;
        
    }
    
    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}