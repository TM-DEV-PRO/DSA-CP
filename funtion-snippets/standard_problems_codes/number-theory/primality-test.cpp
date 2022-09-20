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

bool isPrime(int N)
{
    if (N <= 1)
        return false;

    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}

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
        if (isPrime(N))
            cout << "yes\n";
        else
            cout << "no\n";
        test--;
    }
    return 0;
}