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
int firstMissingPositive(vector<int> &A) {
       for(int i=0;i<A.size();i++){
        if(A[i]<=0)A[i]=A.size()+1;
    }
    
    for(int i=0;i<A.size();i++){
        if(abs(A[i])>0 && abs(A[i])<=A.size())
            A[abs(A[i])-1]=0-A[abs(A[i])-1];
    }
    
    int ans=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>0){
            ans=i+1;
            break;
        }
    }
    
    return ans==0?A.size()+1:ans;
}

 int firstMissingPositive(vector<int> &A) {
            int n = A.size();
            for (int i = 0; i < n; i++) {
                if (A[i] > 0 && A[i] <= n) {
                    int pos = A[i] - 1;
                    if (A[pos] != A[i]) {
                        swap(A[pos], A[i]);
                        i--;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                if (A[i] != i + 1) return (i + 1);
            }
            return n + 1;
        }


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}