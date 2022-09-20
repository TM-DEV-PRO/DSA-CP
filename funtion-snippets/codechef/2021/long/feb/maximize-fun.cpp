#include <bits/stdc++.h>
using namespace std;
long long int solve(vector<long long int> &num, int n)
{
    sort(num.begin(), num.end());
    long long int ans = INT_MIN;

    return abs(num[1] - num[0]) + abs(num[n - 1] - num[1]) + abs(num[n - 1] - num[0]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    std::cin >> test;
    while (test)
    {
        int n;
        cin >> n;
        vector<long long int> num(n);
        for (auto &i : num)
            cin >> i;
        cout << solve(num, n) << "\n";
        test--;
    }
    return 0;
}