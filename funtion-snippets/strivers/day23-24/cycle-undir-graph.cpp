
bool isCycle(vector<int> gra[],int s,vector<bool> &vis,int parent){
    vis[s] = true;
    
    for(auto i:gra[s]){
        if(!vis[i]){
            if(isCycle(gra,i,vis,s))
                return true;
        }
        
        else if(i!=parent)
            return true;
    }
    
    return false;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> gra[A];
    
    for(auto i:B){
        gra[i[0]-1].push_back(i[1]-1);
        gra[i[1]-1].push_back(i[0]-1);
    }
    
    vector<bool> vis(A,false);
    
    for(int i=0;i<A;i++){
        if(!vis[i]){
            if(isCycle(gra,i,vis,-1))
                return true;
        }
    }
    return false;
}
