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

// This code is breaking somewhere!
void duplicateZeros(vector<int> &arr)
{
    class Solution
    {

    public:
        void duplicateZeros(vector<int> &arr)
        {
            int count = 0;
            int i = 0;
            while (i + count < arr.size())
            {
                if (arr[i] == 0)
                    count++;
                i++;
            }
            i--;
            int flag = 0;
            if (i + count >= arr.size())
            {
                flag = 1;
                count--;
            }
            cout << count;
            int p2 = arr.size() - 1, p1 = p2 - count;
            if (arr[p1] == 0 && flag == 1)
            {
                arr[p2] = 0;
                p2--;
                p1--;
            }
            while (p1 >= 0)
            {
                if (arr[p1] != 0)
                {
                    arr[p2] = arr[p1];
                    p1--;
                    p2--;
                }

                else
                {
                    arr[p2] = arr[p1];
                    p1--;
                    p2--;
                    arr[p2] = 0;
                    p2--;
                }
            }
        }
    };
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}