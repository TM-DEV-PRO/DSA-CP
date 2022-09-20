#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
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
const long long  INF = 1e18L + 5;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N,M;
cin>>N>>M;
int grid[N+1][N+1];

for(int i=0;i<=N;i++)
        for(int j=0;j<=N;j++)
            grid[i][j]=0;

for(int i=1;i<=M;i++){
    int x,y;
    cin>>x>>y;
    grid[x][y]=1;
}

return 0;
}