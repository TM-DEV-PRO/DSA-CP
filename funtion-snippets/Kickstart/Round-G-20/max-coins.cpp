

#include <bits/stdc++.h>
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
long long int maxCoins(vector<vector<int>> &matrix)
{
    long long int row = matrix.size();
    long long int col = matrix[0].size();
    long long int max_coins = -1;
    for (long long int i = 0; i < row; i++)
    {
        long long int coins = 0;
        for (long long int j = i, k = 0; j < row && k < col; j++, k++)
        {
            coins += matrix[j][k];
        }
        max_coins = max(max_coins, coins);
    }

    for (long long int i = 0; i < col; i++)
    {
        long long int coins = 0;
        for (int j = 0, k = i; j < row && k < col; j++, k++)
        {
            coins += matrix[j][k];
        }

        max_coins = max(max_coins, coins);
    }

    // for (int i = 0; i < row; i++)
    // {
    //     int coins = 0;
    //     for (int j = i, k = col-1; j < row && k >= 0; j++, k--)
    //     {
    //         coins += matrix[j][k];
    //     }
    //     max_coins = max(max_coins, coins);
    // }

    // for (int i = col-1; i >= 0; i--)
    // {
    //     int coins = 0;
    //     for (int j = 0, k = i; j < row && k >= 0; j++, k--)
    //     {
    //         coins += matrix[j][k];
    //     }

    //     max_coins = max(max_coins, coins);
    // }



    return max_coins;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    std::cin >> test;
    int t = 1;
    while (t <= test)
    {
        int N;
        cin >> N;
        vector<vector<int>> matrix(N);

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int x;
                cin >> x;
                matrix[i].push_back(x);
            }
        }

        long long int coins = maxCoins(matrix);

        cout << "Case #" << t << ": " << coins << endl;

        t++;
    }
    return 0;
}