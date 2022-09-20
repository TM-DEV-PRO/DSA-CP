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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    std::cin >> test;
    int t = 1;
    while (t <= test)
    {
        long long int W, N;
        cin >> W >> N;
        vector<long long int> wheels(W);

        for (auto &i : wheels)
            cin >> i;

        long long int min_moves = 10000000001;
        for (long long int i = 1; i <= N; i++)
        {
            long long int moves = 0;
            for (long long int j = 0; j < W; j++)
            {
                moves+= min(abs(wheels[j]-i),N-(abs(wheels[j]-i)));
            }

            min_moves = min(min_moves, moves);
        }

    
        cout << "Case #" << t << ": " << min_moves << endl;

        t++;
    }
    return 0;
}