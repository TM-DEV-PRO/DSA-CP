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

int lastManStanding(int N, int K){
    if(N==1)return 0;

    return (lastManStanding(N-1,K)+K)%N;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
std::cin>>test;


return 0;
}