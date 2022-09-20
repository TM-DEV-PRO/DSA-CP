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

void insertionSort(vector<int> &array){
    int size =array.size();
    for(int i=1;i<size;i++){
        
        for(int j=i-1;j>=0;j--){
            if(array[j]>array[j+1])swap(array[j],array[j+1]);
            else break;
        }
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}