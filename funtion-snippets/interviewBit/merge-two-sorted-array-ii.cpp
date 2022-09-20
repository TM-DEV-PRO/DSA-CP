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

    void merge(vector<int> &A, vector<int> &B) {
       
        // vector<int> res;
        
        // int i=0,j=0;
        // while(i<A.size() && j<B.size()){
        //     if(A[i]<=B[j]){
        //         res.push_back(A[i]);
        //         i++;
        //     }
            
        //     else {
        //         res.push_back(B[j]);
        //         j++;
        //     }
        // }
        
        // while(i<A.size()){
        //     res.push_back(A[i]);
        //     i++;
        // }
        // while(j<B.size()){
        //     res.push_back(B[j]);
        //     j++;
        // }
        
        // A = res;
        
        int i = A.size()-1;
        int j = B.size()-1;
        
        A.resize(i+j+2);
        int k = A.size()-1;
        
        while(j>=0){
            if(i>=0 && A[i]>B[j]){
                A[k--] = A[i--];
            }
            
            else {
                A[k--] = B[j--];
            }
        }
        
        
    }


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}