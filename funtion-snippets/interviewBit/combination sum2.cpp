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
void comb(vector<int> &A,vector<vector<int>> &temp, int index, int target, vector<int> op){
    if(target<0) return;
    if(target==0){
        temp.push_back(op);
        return;
    }
    
    for(int i=index;i<A.size();i++){
        op.push_back(A[i]);
        comb(A,temp,i+1,target-A[i],op);
        op.pop_back();
    }
    
    return;
}



vector<vector<int> > combinationSum(vector<int> &A, int B) {
   
  sort(A.begin(),A.end());
  
  vector<int> op;
  vector<vector<int>> temp,res;
   if(A.size()==0 || B==0)return res;
  comb(A,temp,0,B,op);
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