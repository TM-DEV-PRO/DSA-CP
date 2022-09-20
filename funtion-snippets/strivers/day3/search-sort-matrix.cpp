#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j=matrix[0].size()-1, i=0;
        
        while(i<matrix.size() && j>=0){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else
                j--;
        }
        
        return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}