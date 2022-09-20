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

void rearrangeAlternately2(vector<long int> &array)
{
    long int size = array.size();
    long int mod = 10000000;
    long int min_index = 0, max_index = size - 1;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            array[i] += (array[max_index] % mod) * mod;
            max_index--;
        }

        else
        {
            array[i] += (array[min_index] % mod) * mod;
            min_index++;
        }
    }

    for (auto &i : array)
        i = i / mod;
}

void rearrangeAlternately(vector<long int> &array)
{
    long int mod = 10000000;
    long int size = array.size();
    long int start = 0, end = size - 1;
    while (start < end)
    {
        array[start] += (array[end] % mod) * mod;
        start++;
        end--;
    }
    start--;
    end++;
    end = size - 1;
    if (size % 2 != 0)
    {
        array[size - 1] = array[start + 1];
        end = size - 2;
    }
    long int sm = end, mx = sm - 1;

    while (start >= 0)
    {
        array[sm] = array[start] % mod;
        array[mx] = array[start] / mod;

        mx -= 2;
        sm -= 2;
        start--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    std::cin >> test;
    while (test)
    {
        long int N;
        cin >> N;
        vector<long int> array(N);
        for (auto &i : array)
            cin >> i;
        rearrangeAlternately2(array);
        for (auto i : array)
            cout << i << " ";
        cout << "\n";
        test--;
    }
    return 0;
}