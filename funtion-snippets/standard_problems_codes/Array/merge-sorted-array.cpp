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
void merge(int arr1[], int arr2[], int n, int m)
{
    int gap = (n + m) / 2 + (n + m) % 2;
    while (gap >= 1)
    {
        // cout<<gap<<"\n";
        int i = 0, j = gap;
        while (j < n + m)
        {

            if (i < n && j < n)
            {
                // cout<<" "<<arr1[i]<<" "<<arr1[j];
                if (arr1[i] > arr1[j])
                    swap(arr1[i], arr1[j]);
            }
            else if (i < n && j >= n)
            {
                // cout<<" "<<arr1[i]<<" "<<arr2[j-n];
                if (arr1[i] > arr2[j - n])
                    swap(arr1[i], arr2[j - n]);
            }

            else
            {
                // cout<<" "<<arr2[i-n]<<" "<<arr2[j-n];
                if (arr2[i - n] > arr2[j - n])
                    swap(arr2[i - n], arr2[j - n]);
            }
            // cout<<"\n";
            i++;
            j++;
        }
        if (gap == 1)
            break;
        gap = ((gap / 2) + (gap % 2));
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}