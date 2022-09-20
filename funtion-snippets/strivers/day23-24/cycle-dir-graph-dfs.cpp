
bool isCycle(vector<int> gra[],int s,vector<bool> &vis,vector<bool> &rec){
    vis[s] = true;
    rec[s] = true;
    for(auto i:gra[s]){
        if(!vis[i]){
            if(isCycle(gra,i,vis,rec))
                return true;
        }
        
        else if(rec[i]==true)
            return true;
    }
    rec[s] = false;
    return false;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> gra[A];
    
    for(auto i:B)
        gra[i[0]-1].push_back(i[1]-1);
        
    
    
    vector<bool> vis(A,false);
    vector<bool> rec(A,false);
    for(int i=0;i<A;i++){
        if(!vis[i]){
            if(isCycle(gra,i,vis,rec))
                return true;
        }
    }
    return false;
}
