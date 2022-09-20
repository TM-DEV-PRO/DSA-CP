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

void bucketSort(vector<int> &array, int no_of_buc)
{
    int mx = array[0];
    for (auto i : array)
        mx = max(mx, i);
    mx++;
   // cout<<mx<<"\n";
    vector<int> bkt[no_of_buc];

    for (auto i : array)
    {   
        int bk = (no_of_buc * i) / mx;
        //cout<<bk<<" ";
        bkt[bk].push_back(i);
    }
    //cout<<"\n";
    for (auto &i : bkt)
        sort(i.begin(), i.end());

    int index = 0;

    for (auto i : bkt)
    {
        for (auto j : i)
        {   //cout<<j<<" ";
            array[index++] = j;
        }
        
        //cout<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}