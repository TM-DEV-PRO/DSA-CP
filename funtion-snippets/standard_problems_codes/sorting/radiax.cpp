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
void countSort(vector<int> &array, int exp)
{   
    int count[10] = {0};
    for (auto i : array)
        count[(i/exp)%10]++;

    for (int i = 1; i < 10 ; i++)
    {
        count[i] += count[i - 1];
    }

    vector<int> temp(array.size());

    for (int i = array.size() - 1; i >= 0; i--)
    {
        temp[count[(array[i]/exp)%10] - 1] = array[i];
        count[(array[i]/exp)%10]--;
    }

    int j = 0;
    for (auto i : temp)
    {
        array[j] = i;
        j++;
    }
}

void radiaxSort(vector<int> &array){
    int mx = array[0];
    for(auto i:array)mx=max(mx,i);
    for( int exp=1;mx/exp>0;exp+=10){
        countSort(array,exp);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}