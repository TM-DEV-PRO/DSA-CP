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
 long int minCost(string str,long int cost, int x, int y, int i){
     if(i>=str.length())
        return cost;
    if(str[i]=='?'){
        string temp = str;
        temp[i] = 'C';
        str[i] = 'J';
        return min(minCost(temp, cost, x, y, i),minCost(str, cost, x, y, i));
    }

    else if(str[i]=='C'){
        if(i!=0 && str[i-1]=='J'){
            return minCost(str, cost+y, x, y, i+1);
        }

        else return minCost(str, cost, x, y, i+1);
    }

    else {
        if(i!=0 && str[i-1]=='C'){
            return minCost(str, cost+x, x, y, i+1);
        }

        else return minCost(str, cost, x, y, i+1);
    }
 }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test;
std::cin>>test;
int k=1;
while(k<=test)
{
    int x,y;
    cin>>x>>y;
    string str;
    cin>>str;
    if(str.length()<=1)
        return 0;
    long int cost=0;
    long int ans = minCost(str,cost,x,y,0);
    cout<<"Case "<<"#"<<k<<": "<<ans<<endl;
k++;
}
return 0;
}