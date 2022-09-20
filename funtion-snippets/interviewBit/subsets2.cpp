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
void sets(vector<int>&A,vector<vector<int>> &res,int index,vector<int> op){
    res.push_back(op);
    
    for(int i=index;i<A.size();i++){
        // if(i==0){
        //     op.push_back(A[i]);
        //     sets(A,res,i+1,op);
        //     op.pop_back();
        // }
        
        //else{
           // if(A[i]!=A[i-1]){
                op.push_back(A[i]);
                sets(A,res,i+1,op);
                op.pop_back();
           // }
       // }
    }
    return;
}

vector<vector<int> > subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<int> op;
    vector<vector<int>> temp,res;
    sets(A,temp,0,op);
    sort(temp.begin(),temp.end());
    if(temp.size()==0)return res;
    res.push_back(temp[0]);
    for(int i=1;i<temp.size();i++){
        if(temp[i]!=temp[i-1])res.push_back(temp[i]);
    }
    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}