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
bool compare(string a, string b)
{
    return a + b > b + a;
}

string largestNumber(const vector<int> &A)
{
    if (A.size() == 0)
        return "";
    if (A.size() == 1)
        return to_string(A[0]);
    vector<string> str;

    for (auto i : A)
    {
        string s = to_string(i);
        str.push_back(s);
    }

    sort(str.begin(), str.end(), compare);

    string res;

    for (auto i : str)
        res += i;

    return (res[0] != '0') ? res : "0";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}