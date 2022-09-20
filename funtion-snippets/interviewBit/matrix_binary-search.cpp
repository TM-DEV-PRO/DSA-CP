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
int searchMatrix(vector<vector<int> > &A, int B) {
    // int low_row=0,low_col=0,high_row=A.size()-1, high_col=A[0].size()-1;
    // while(low_row<=high_row &&  low_col<=high_col){
    //     int mid_row = low_row + (high_row-low_row)/2;
    //     int mid_col = low_col + (high_col-low_col)/2;
    //     if(A[mid_row][mid_col]==B)return 1;
    //     else if(A[mid_row][mid_col]<B){
    //         if(B<=A[mid_row][A[0].size()-1]){
    //             low_row=mid_row;
    //             low_col=mid_col+1;
    //             high_row=mid_row;
    //             high_col=A[0].size()-1;
    //         }
    //         else {
    //             low_row = mid_row+1;
    //             low_col = 0;
    //         }
    //     }
        
    //     else {
    //         if(B>=A[mid_row][0]){
    //             low_row=mid_row;
    //             low_col=0;
    //             high_row=mid_row;
    //             high_col=mid_col-1;
    //         }
    //         else {
    //             high_row = mid_row-1;
    //             high_col = A[0].size()-1;
    //         }
    //     }
    // }
    
    // return 0;
    
    int low=0, high = A.size()-1;
    int row=0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(A[mid][0]==B)return 1;
        
        else if(A[mid][0]>B){
            high = mid-1;
        }
        
        else {
            low=mid+1;
            row=mid;
        }
        
    }
    
    low = 0 , high = A[0].size()-1;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        
        if(A[row][mid]==B)return 1;
        else if( A[row][mid]>B){
            high=mid-1;
        }
        else low =mid +1;
    }
    
    return 0;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}