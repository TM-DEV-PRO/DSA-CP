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

struct Interval
{
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

bool mycmp(Interval A, Interval B)
{
    return A.start < B.start;
}
vector<Interval> mergeIntervals(vector<Interval> &A)
{

    sort(A.begin(), A.end(), mycmp);
    for (int i = 0; i < A.size() - 1; i++)
    {
        A[i + 1].start = max(A[i].end, A[i + 1].start);
        A[i + 1].end = max(A[i].end, A[i + 1].end);
    }

    vector<Interval> res;

    for (int i = 0; i < A.size(); i++)
    {
        Interval temp;
        temp.start = A[i].start;
        while (i < A.size() - 1 && A[i].end == A[i + 1].start)
            i++;
        temp.end = A[i].end;

        res.push_back(temp);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}