#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
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
vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> dia(m+n-1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j-i<0){
                    dia[j-i+m+n-1].push_back(mat[i][j]);
                }
                else
                    dia[j-i].push_back(mat[i][j]);
            }
        }
        
        for(auto &i:dia)
            sort(i.begin(),i.end());
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j-i<0){
                    mat[i][j] = dia[j-i+m+n-1][j];
                }
                else
                    mat[i][j] = dia[j-i][i];
            }
        }
        
        return mat;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}