#include<bits/stdc++.h>
using namespace std;
int n,m,sr,ds;
vector<pair<int,int>> gra[1000005];
int vis[1000005];
set<pair<int,int>> st;
priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq;
void dijkstraSet(){
    vis[sr]=0;
	st.insert({0,sr});
    while(!st.empty()){
	    pair<int,int>tp=*(st.begin());
	    st.erase(st.begin());
	    int u=tp.second;
	    for(auto it=gra[u].begin();it!=gra[u].end();it++){
	        int wt=(*it).second;
            int v=(*it).first;
	        if(vis[v]>vis[u]+wt){
	            if(vis[v]!=INT_MAX)
	                st.erase(st.find({vis[v],v}));
	            vis[v]=vis[u]+wt;
	            st.insert({vis[v],v});
	        }
	    }
	}
}

void dijkstraPQ(){
    vis[sr]=0;
	pq.push({0,sr});
    while(!pq.empty()){
	    int u=pq.top().second;
        pq.pop();
	    for(auto it=gra[u].begin();it!=gra[u].end();it++){
	        int wt=(*it).second;
            int v=(*it).first;
	        if(vis[v]>vis[u]+wt){
	            vis[v]=vis[u]+wt;
	            pq.push({vis[v],v});
	        }
	    }
	}
}

void solve(){
	cin>>n;
	for(int i=0;i<n;++i){
		int v;
		cin>>v;
        gra[v]={};
		vis[v]=INT_MAX;
	}
	cin>>m;
	for(int i=0;i<m;++i){
		int u,v,w;
		cin>>u>>v>>w;
		gra[u].push_back({v,w});
	}
	cin>>sr>>ds;
	dijkstraSet();
	if(vis[ds]==INT_MAX)
	    cout<<"-1"<<endl;
	else
	    cout<<vis[ds]<<endl;
}

int main(){
	
    solve();

	return 0;
}