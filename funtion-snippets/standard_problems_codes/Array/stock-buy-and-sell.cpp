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
    while (test)
    {
        int N;
        cin >> N;
        vector<int> stocks(N);

        for (auto &i : stocks)
            cin >> i;

        vector<int> lmin, lmax;

        for (int i = 0; i < N; i++)
        {
            if (lmin.size() <= 0)
            {
                if (stocks[i] <= stocks[i + 1])
                    lmin.push_back(i);
                else
                    continue;
            }

            else
            {
                if (stocks[i] <= stocks[i + 1] && stocks[i] <= stocks[i - 1])
                    lmin.push_back(i);
                else if (stocks[i] >= stocks[i + 1] && stocks[i] >= stocks[i - 1])
                    lmax.push_back(i);
                else
                    continue;
            }
        }
        int flag = 0;
        for (int i = 0, j = 0; i < lmin.size() && j < lmax.size(); i++, j++)
        {
            flag = 1;
            cout << "(" << lmin[i] << " " << lmax[j] << ")"
                 << " ";
        }
        if (flag == 1)
            cout << "\n";

        if (flag == 0)
            cout << "No Profit"
                 << "\n";

        test--;
    }
    return 0;
}