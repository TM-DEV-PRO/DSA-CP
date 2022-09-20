#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
class Solution {

public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==2)
                    q.push({i,j});
        //cout<<"1"<<" ";
        int time = 0;
        while(!q.empty()){
            //cout<<2<<" ";
            queue<pair<int,int>> qt;
            while(!q.empty()){
                //cout<<3<<" ";
                pair<int,int> p = q.front();
                int r = p.first;
                int c = p.second;
                q.pop();
                if(r-1>=0 && grid[r-1][c]==1){
                    qt.push({r-1,c});
                    grid[r-1][c]=2;
                }
                if(r+1<m && grid[r+1][c]==1){
                    qt.push({r+1,c});
                    grid[r+1][c]=2;
                }
                if(c-1>=0 && grid[r][c-1]==1){
                    qt.push({r,c-1});
                    grid[r][c-1]=2;
                }
                if(c+1<n && grid[r][c+1]==1){
                    qt.push({r,c+1});
                    grid[r][c+1]=2;
                }
            }
            
            if(qt.empty())
                break;
            
            
            while(!qt.empty()){
                //cout<<4<<" ";
                pair<int,int> pa = qt.front();
                qt.pop();
                q.push(pa);
            }
            //cout<<5<<endl;
            time++;
        }
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1)
                    return -1;
        
        
        return time;
            
        
    }
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}