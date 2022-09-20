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

int maxProfit(vector<int> &array, int size){
    int profit=0;
    for(int i=1;i<size;i++){
        if(array[i]>array[i-1]){
            profit+=array[i]-array[i-1];
        }
    }

    return profit;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}