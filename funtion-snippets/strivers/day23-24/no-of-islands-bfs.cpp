class Solution {
public:
    int bfs(vector<vector<char>>& grid,int i,int j){
        queue<pair<int,int>> q;
        q.push({i,j});
        int count = 0;
        while(!q.empty()){
            count++;
            pair<int,int> p = q.front();
            q.pop();
            grid[p.first][p.second] = '0';
            i=p.first;
            j=p.second;
            //cout<<i<<" "<<j<<endl;
            if(j>0 && grid[i][j-1]=='1'){
                grid[i][j-1] = '0';
                q.push({i,j-1});
            }
            if((j<grid[0].size()-1) && grid[i][j+1]=='1'){
                grid[i][j+1]='0';
                q.push({i,j+1});
            }
            if(i>0 && grid[i-1][j]=='1'){
                grid[i-1][j] = '0';
                q.push({i-1,j});
            }
            if(i<grid.size()-1 && grid[i+1][j]=='1'){
                grid[i+1][j] = '0';
                q.push({i+1,j});
            }
                
        }

        return count;
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int islands[1005] = {0};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    grid[i][j] = '0';
                    int isize = bfs(grid,i,j);
                    islands[isize]++;
                    count++;
                }
                
                //cout<<grid[i][j]<<" ";
            }
            
            //cout<<endl;
        }

        
        
        return count;
    }
};