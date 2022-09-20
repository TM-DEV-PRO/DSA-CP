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
int dp[100001][3];
int happinessMemo(vector<vector<int>> &points,int i,int f){
    if(i==0){
        if(f==-1) return max(points[0][0],max(points[0][1],points[0][2]));
        if(f==0) return max(points[0][1],points[0][2]);
        if(f==1) return max(points[0][0],points[0][2]);
        if(f==2) return max(points[0][0],points[0][1]);
    }
    
    if(f==-1){
    int c1 = points[i][0] + happinessMemo(points,i-1,0);
    int c2 = points[i][1] + happinessMemo(points,i-1,1);
    int c3 = points[i][2] + happinessMemo(points,i-1,2);
    return max(c1,max(c2,c3));
    }
    else {
        if(dp[i][f]!=-1)return dp[i][f];
        if(f==0){
            int c2 = points[i][1] + happinessMemo(points,i-1,1);
            int c3 = points[i][2] + happinessMemo(points,i-1,2);
            return dp[i][f]=max(c2,c3);
        }
        else if(f==1){
            int c1 = points[i][0] + happinessMemo(points,i-1,0);
            int c3 = points[i][2] + happinessMemo(points,i-1,2);
            return dp[i][f]=max(c1,c3);
        }
        
        else {
            int c1 = points[i][0] + happinessMemo(points,i-1,0);
            int c2 = points[i][1] + happinessMemo(points,i-1,1);
            return dp[i][f]=max(c1,c2);
        }
    }
}
int happinessTab(vector<vector<int>> &points,int N){
    if(N==1) return max(points[0][0],max(points[0][1],points[0][2]));

    int tab[N][3]; // we can also do it with tab[3] as only previous state is necessary for each  subsequent state
    tab[0][0] = max(points[0][1],points[0][2]);
    tab[0][1] = max(points[0][0],points[0][2]);
    tab[0][2] = max(points[0][0],points[0][1]);

    for(int i=1;i<N;i++){
        for(int j=0;j<3;j++){
            tab[i][j] = max(points[i][(j+1)%3]+tab[i-1][(j+1)%3],points[i][(j+2)%3]+tab[i-1][(j+2)%3]);
        }
    }

    return max(tab[N-1][0],max(tab[N-1][1],tab[N-1][2]));
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
vector<vector<int>> points(N);
for(auto &i:points){
    int A,B,C;
    cin>>A>>B>>C;
    i = {A,B,C};
}
memset(dp,-1,sizeof(dp));
//cout<<happinessMemo(points,N-1,-1);
cout<<happinessTab(points,N);

return 0;
}