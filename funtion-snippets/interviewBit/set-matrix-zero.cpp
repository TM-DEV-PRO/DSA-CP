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

void setZeroes(vector<vector<int>> &A)
{

    unordered_set<int> row;
    unordered_set<int> col;
    int rows = A.size();

    for (int i = 0; i < rows; i++)
    {
        int cols = A[i].size();
        for (int j = 0; j < cols; j++)
        {
            if (A[i][j] == 0)
            {
                row.insert(i);
                col.insert(j);
            }
        }
    }

    for (auto it = row.begin(); it != row.end(); it++)
    {
        for (int i = 0; i < A[*it].size(); i++)
            A[*it][i] = 0;
    }

    for (auto it = col.begin(); it != col.end(); it++)
    {
        for (int i = 0; i < A.size(); i++)
            A[i][*it] = 0;
    }

    // for(int i=0;i<rows;i++){
    //     int cols = A[i].size();
    //     for(int j=0;j<cols;j++){
    //         if(A[i][j]==0){
    //             for(int r=0;r<rows;r++){
    //                 if(A[r][j]!=0)A[r][j]=2;
    //             }
    //             for(int c=0;c<cols;c++){
    //                 if(A[i][c]!=0)A[i][c]=2;
    //             }
    //         }
    //     }
    // }

    //  for(int i=0;i<rows;i++){
    //     int cols = A[i].size();
    //     for(int j=0;j<cols;j++){
    //         if(A[i][j]==2)A[i][j]=0;

    //     }
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}