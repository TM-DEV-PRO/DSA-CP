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
void subsets(vector<int> &num,vector<vector<int>> &res,int index, vector<int> op){
    res.push_back(op);
    
    for(int i=index;i<num.size();i++){
        op.push_back(num[i]);
        subsets(num,res,i+1,op);
        op.pop_back();
    }
    
    return;
}

vector<vector<int> > combine(int A, int B) {
    vector<int> num(A),op;
    vector<vector<int>> res,ans;
    A=1;
    for(auto &i:num)i=A++;
    
    subsets(num,res,0,op);
    
    for(auto i:res){
        if(i.size()==B)ans.push_back(i);
    }
    
    return ans;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}