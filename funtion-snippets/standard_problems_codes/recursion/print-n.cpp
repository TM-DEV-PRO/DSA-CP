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

void print1toN(int N){
    if(N==1){
        cout<<N<<" ";
        return;
    }

    print1toN(N-1);
    cout<<N<<" ";
    return;
}

void printNto1(int N){
    if(N==1){
        cout<<N<<" ";
        return;
    }

    cout<<N<<" ";
    printNto1(N-1);
    return;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}