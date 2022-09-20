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

void selectionSort(vector <int> &array){
    int size = array.size();
    for(int i = 0 ;i<size-1;i++){
        int min_Index = i;
        for(int j=i+1;j<size;j++){
            if(array[j]<array[min_Index]){
                min_Index = j;
            }
        }

        swap(array[i],array[min_Index]);
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}