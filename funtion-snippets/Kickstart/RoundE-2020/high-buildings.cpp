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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        if ((c + (a - c) + (b - c)) > n)
            cout << "Case #" << t << ": "
                 << "IMPOSSIBLE" << endl;
        else
        {

            vector<int> heights;

            for (int i = 1; i <= (a - c); i++)
            {
                heights.push_back(n - 1);
            }

            for (int i = 1; i <= c; i++)
            {
                heights.push_back(n);
            }

            int left = n - heights.size();
            int no_of_1 = left - (b - c);

            for (int i = 1; i <= no_of_1; i++)
            {
                heights.push_back(1);
            }

            for (int i = 1; i <= left - no_of_1; i++)
            {
                heights.push_back(n - 1);
            }

            cout << "Case #" << t << ": ";

            for (int i = 0; i < heights.size(); i++)
            {
                cout << heights[i];
                if (i != heights.size() - 1)
                    cout << " ";
            }

            cout << endl;
        }

        t++;
    }
    return 0;
}