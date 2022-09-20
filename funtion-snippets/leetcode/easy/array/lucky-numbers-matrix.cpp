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
int maxInRow(vector<int> &row)
{
    int size_row = row.size();
    int max_element = row[0];
    for (int i = 0; i < size_row; i++)
    {
        if (row[i] > max_element)
            max_element = row[i];
    }

    return max_element;
}

int minInRow(vector<int> &row)
{
    int size_row = row.size();
    int min_element = row[0];
    for (int i = 0; i < size_row; i++)
    {
        if (row[i] < min_element)
            min_element = row[i];
    }

    return min_element;
}

int maxInCol(vector<vector<int>> &matrix, int col)
{
    int size_matrix = matrix.size();
    int max_element = matrix[0][col];
    for (int i = 0; i < size_matrix; i++)
    {
        if (matrix[i][col] > max_element)
            max_element = matrix[i][col];
    }

    return max_element;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> matrix;

    vector<int> rowMin, colMax, luckyNumbers;

    // storing min in row
    for (int i = 0; i < matrix.size(); i++)
    {
        int min_element = minInRow(matrix[i]);
        rowMin.push_back(min_element);
    }

    // storing max in col
    for (int i = 0; i < matrix[0].size(); i++)
    {
        int max_element = maxInCol(matrix, i);
        colMax.push_back(max_element);
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == rowMin[i] && rowMin[i] == colMax[j])
            {
                luckyNumbers.push_back(matrix[i][j]);
            }
        }
    }

    return 0;
}