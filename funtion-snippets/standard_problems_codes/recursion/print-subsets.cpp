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

void printSubsets(string str, string sub_set)
{
    if (str.length() == 0)
    {
        cout << sub_set << " ";
        return;
    }

    string sub1 = sub_set;
    string sub2 = sub_set + str[str.length() - 1];
    str.erase(str.begin() + str.length() - 1);
    printSubsets(str, sub1);
    printSubsets(str, sub2);
}

void printSubsets2(string str, string sub_set, int index = 0)
{
    if (index == str.length())
    {
        cout << sub_set << " ";
        return;
    }

    printSubsets2(str, sub_set, index + 1);
    printSubsets2(str, sub_set + str[index], index + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}