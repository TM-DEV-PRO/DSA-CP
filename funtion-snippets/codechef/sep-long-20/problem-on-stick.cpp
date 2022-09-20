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
        long int n;
        cin >> n;
        unordered_set<int> check;
        long int min_operation = 0;
        while (n)
        {
            long int height;
            cin >> height;
            if (check.find(height) == check.end() && height!=0)

            {
                check.insert(height);
                min_operation++;
            }

            n--;
        }
        cout << min_operation << "\n";

        test--;
    }
    return 0;
}