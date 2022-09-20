#include<bits/stdc++.h>
using namespace std;
const unsigned long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;

unsigned long long int md = 1000000007LL;
vector<vector<pair<unsigned long long int,unsigned long long int>>> arr;
vector<unsigned long long int> childs;
unsigned long long int countChilds(pair<unsigned long long int,unsigned long long int> p){
     queue<pair<unsigned long long int,unsigned long long int>> Q;
     
     Q.push(p);
     unsigned long long int count = 0; 
     while(!Q.empty()){
        pair<unsigned long long int,unsigned long long int> p = Q.front();
        Q.pop();
            count+= arr[p.first].size();
            for(int i=0;i<arr[p.first].size();i++){
                Q.push(arr[p.first][i]);
            }
        
     }
     
     return count;
}
bool cmp(pair<unsigned long long int,unsigned long long int> p1, pair<unsigned long long int,unsigned long long int> p2){
  
    
    if( childs[p1.first] == childs[p2.first])
        return arr[p1.first].size()>arr[p2.first].size();
    return childs[p1.first] > childs[p2.first];
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    unsigned long long int test;
    std::cin>>test;
    while(test)
    {
        unsigned long long int n,x;
        cin>>n>>x;
        arr.resize(n+1);
        childs.resize(n+1);
        for(unsigned long long int i=1;i<n;i++){
            unsigned long long int a,b;
            cin>>a>>b;
            unsigned long long int z = -1;
            if(b==1)
                z=x;
            pair<unsigned long long int,unsigned long long int> p = {b,z};
            arr[a].push_back(p);
        }
        for(unsigned long long int i = 1;i<=n;i++){
            unsigned long long int z = -1;
            if(i==1)
                z=x;
            pair<unsigned long long int,unsigned long long int> p = {i,z};
            childs[i] = countChilds(p);
        }
        for(unsigned long long int j=1;j<=n;j++){
           sort(arr[j].begin(), arr[j].end(),cmp);
        }
      
        queue<pair<unsigned long long int,unsigned long long int>> q;

        q.push({1,x});
        unsigned long long int res = x%md;
        while(!q.empty()){
            pair<unsigned long long int,unsigned long long int> p = q.front();
            q.pop();
            unsigned long long int val = p.second%md;
            for(unsigned long long int i=0;i<arr[p.first].size();i++){
                res = ((res%md) + (val%md))%md;
                arr[p.first][i].second=val%md;
                q.push(arr[p.first][i]);
                val= ((val%md) + (p.second%md))%md;
            }

        }
      
        cout<<res%md<<endl;
        
        
        arr.clear();
        childs.clear();
    test--;
    }
return 0;
}


// 2
// 11 2
// 1 2
// 1 3
// 3 4
// 4 11
// 3 6
// 3 5
// 2 7
// 2 8
// 7 9
// 7 10
// 13 1
// 1 2
// 1 3
// 2 5
// 2 4
// 4 6
// 5 7
// 3 9
// 3 10
// 3 11
// 10 12
// 10 13