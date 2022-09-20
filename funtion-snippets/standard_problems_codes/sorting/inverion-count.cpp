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
long long int inv_count = 0;
void merge(vector<long long int> &arr, long long int left, long long int mid, long long int right)
{
    long long int p1 = left, p2 = mid + 1;
    vector<long long int> temp;
    while (p1 <= mid && p2 <= right)
    {
        if (arr[p1] <= arr[p2])
        {
            temp.push_back(arr[p1]);
            p1++;
        }
        else
        {
            //cout<<arr[p1]<<" "<<arr[p2]<<"\n";
            temp.push_back(arr[p2]);
            p2++;
            inv_count+=mid-p1+1;
        }
    }

    while (p1 <= mid)
    {
        temp.push_back(arr[p1]);
        p1++;
    }
    while (p2 <= right)
    {
        temp.push_back(arr[p2]);
        p2++;
    }

    long long int i = 0;
    while (left <= right)
    {
        arr[left] = temp[i];
        left++;
        i++;
    }
}

void mergeSort(vector<long long int> &arr, long long int left, long long int right)
{
    if (right > left)
    {
        long long int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int test;
    std::cin >> test;
    while (test)
    {
        long long int N;
        cin >> N;
        vector<long long int> arr(N);
        for (auto &i : arr)
            cin >> i;
        mergeSort(arr, 0, N - 1);
        //for(auto i:arr)cout<<i<<" ";
        cout <<inv_count << "\n";
        inv_count = 0;
        test--;
    }
    return 0;
}