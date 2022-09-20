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

int maxEvenOdd(vector<int> &array){
    int maxLen=1, count=1, prev=array[0];
    int flag=0;
    for(auto i: array){
        if(flag==0)flag=1;
        else {
            if((prev+i)%2!=0){
                prev=i;
                count++;
                maxLen = max(maxLen,count);
            }
            else{
                prev=i;
                count=1;
            }

        }
    }

    return maxLen;

}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}