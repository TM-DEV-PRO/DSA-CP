#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;

    static bool cmp(pair<int,int> p1, pair<int,int> p2){
        return p1.second < p2. second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {   
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
            v.push_back({start[i],end[i]});
        
        sort(v.begin(),v.end(),cmp);
        
        int count =1;
        
        int i=0;
        
        for(int j=1;j<n;j++){
            if(v[j].first>v[i].second){
                count++;
                i=j;
            }
        }
        
        return count;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}