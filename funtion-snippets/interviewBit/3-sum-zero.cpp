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
void triplets(vector<vector<int>> &res, vector<int> &A, int index){
    long long int num = A[index];
    
    int i= index+1;
    int j= A.size()-1;
    
    while(i<j){
        long long int curr = num + A[i] + A[j];
        
        if(curr>0)
            j--;
        else if(curr<0)
            i++;
        else{
            vector<int> temp;
            temp.push_back(num);
            temp.push_back(A[i]);
            temp.push_back(A[j]);
            res.push_back(temp);
            do{
                i++;
            }while(i<A.size() && A[i]==A[i-1]);
            do{
                j--;
            }while(j>=0 && A[j]==A[j+1]);
            
        }
            
        
    }
}


vector<vector<int> > threeSum(vector<int> &A) {
    vector<vector<int>> res;
    if(A.size()<3) return res;
    sort(A.begin(),A.end());
    triplets(res,A,0);
    for(int i=1;i<A.size()-2;i++)
        if(A[i]!=A[i-1])triplets(res,A,i);
    
    return res;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}