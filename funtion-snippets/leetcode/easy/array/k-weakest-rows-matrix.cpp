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
#include <iterator>
using namespace std;

int noOfSoldiers(vector<int> &row)
{
    int size_row = row.size();
    int soldiers = 0;
    for (auto i : row)
    {
        if (i == 1)
            soldiers++;
        else
            break;
    }

    return soldiers;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>  mat; 
    int k;
    vector<pair<int,int>> row_index;
    for(int i=0;i<mat.size();i++){
        row_index.push_back((make_pair(noOfSoldiers(mat[i]),i)));
    }

    sort(row_index.begin(),row_index.end());
    vector<int> weakest_rows;
    for(int i=0;i<k;i++){
        weakest_rows.push_back(row_index[i].second);
    }


    return 0;
}