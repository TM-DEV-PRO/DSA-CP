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
bool isToeplitzMatrix(vector<vector<int>>& matrix){
    int row = matrix.size();
    int col =matrix[0].size();
    for(int i=0;i<row;i++){
        int check = matrix[i][0];
        for(int j=i,k=0;j<row && k<col;j++,k++){
            if(matrix[j][k]!=check)return false;
        }
    }

    for(int i=0;i<col;i++){
        int check = matrix[0][i];
        for(int j=0,k=i;j<row && k<col;j++,k++){
            if(matrix[j][k]!=check)return false;
        }
    }

    return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}