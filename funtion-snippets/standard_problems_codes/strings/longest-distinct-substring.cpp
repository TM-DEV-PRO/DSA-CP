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
        string str;
        cin >> str;
        unordered_map<char, int> check;
        int count = 0, res = 0, index = 0;
        int j = 0;
        for (auto i : str)
        {
            if (check.find(i) == check.end())
            {
                check[i] = j;
                count++;
            }

            else
            {
                if (check[i] >= index)
                {
                    if (count > res)
                        res = count;
                    count = count - (check[i] + 1 - index);
                    index = check[i] + 1;
                    check[i] = j;
                    count++;
                }
                else
                {
                    count++;
                    check[i] = j;
                }
            }

         
            j++;
        }
        if (count > res)
            res = count;

        cout << res << "\n";

        test--;
    }
    return 0;
}