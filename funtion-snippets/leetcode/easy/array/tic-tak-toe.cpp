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
string tictactoe(vector<vector<int>> &moves)
{
    vector<vector<char>> grid(3, vector<char>(3));
    for (int i = 0; i < moves.size(); i++)
    {
        if (i % 2 == 0)
            grid[moves[i][0]][moves[i][1]] = 'X';
        else
            grid[moves[i][0]][moves[i][1]] = 'O';
    }
    string s = "";
    int flag = 0;
    for (auto i : grid)
    {
        flag = 1;
        char c = i[0];

        for (auto j : i)
        {
            if (j != c || c == NULL)
                flag = 0;
        }

        if (flag == 1)
        {
            s += c;
            break;
        }
    }
    if (flag == 0)
    {
        for (int i = 0; i < 3; i++)
        {
            flag = 1;
            char c = grid[0][i];
            for (int j = 0; j < 3; j++)
            {
                if (grid[j][i] != c || c == NULL)
                    flag = 0;
            }

            if (flag == 1)
            {
                s += c;
                break;
            }
        }
    }
    if (flag == 0)
    {

        flag = 1;
        char c = grid[0][0];
        for (int j = 0, k = 0; j < 3 && k < 3; j++, k++)
        {
            if (grid[j][k] != c || c == NULL)
                flag = 0;
        }

        if (flag == 1)
        {
            s += c;
        }
    }
    if (flag == 0)
    {

        flag = 1;
        char c = grid[0][2];
        for (int j = 0, k = 2; j < 3 && k >= 0; j++, k--)
        {
            if (grid[j][k] != c || c == NULL)
                flag = 0;
        }

        if (flag == 1)
        {
            s += c;
        }
    }

    if (flag == 0)
    {
        if (moves.size() == 9)
            return "Draw";
        else
            return "Pending";
    }

    if (s == "X")
        return "A";
    else
        return "B";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}