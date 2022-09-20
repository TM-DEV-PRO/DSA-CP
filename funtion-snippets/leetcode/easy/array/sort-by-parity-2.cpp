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
void sortByParity2(vector<int> &array)
{
    int size_array = array.size();
    int even = 0, odd = 1;
    int flag1 = 1, flag2 = 1;
    while (odd < size_array && even < size_array)
    {
        if (flag1 == 1 && array[even] % 2 == 0)
            even += 2;
        else
            flag1 = 0;

        if (flag2 == 1 && array[odd] % 2 != 0)
            odd += 2;
        else
            flag2 = 0;

        if(flag1==0 && flag2==0){
            swap(array[even],array[odd]);
            flag1=1;
            flag2=1;
        }
    }
}

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}