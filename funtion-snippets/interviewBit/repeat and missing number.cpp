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
vector<int> repeatedNumber(const vector<int> &A)
{

    long n = A.size();
    long S1 = 0, S2 = 0;
    for (int i : A)
    {
        S1 += i;
        S2 += ((long)i) * i;
    }

    long E1 = n * (n + 1) / 2;
    long E2 = n * (n + 1) * (2 * n + 1) / 6;

    long D1 = S1 - E1;
    long D2 = S2 - E2;

    long DIF = D1;
    long SUM = D2 / D1;

    long repeat = (SUM + DIF) / 2;
    long miss = (SUM - DIF) / 2;

    return {(int)repeat, (int)miss};
}

vector<int> repeatedNumber(const vector<int> &A)
{
    vector<int> res;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[abs(A[i]) - 1] < 0)
        {
            res.push_back(abs(A[i]));
            break;
        }

        //else
            //A[abs(A[i]) - 1] = 0 - A[abs(A[i]) - 1];
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > 0)
        {
            res.push_back(i + 1);
            break;
        }
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}