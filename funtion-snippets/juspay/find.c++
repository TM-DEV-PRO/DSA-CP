#include<bits/stdc++.h>
using namespace std;
int n,m,sr,ds;
vector<int> gra[1000005];
bool vis[1000005];

void dfs(int s){
	vis[s]=true;
	for(int i=0;i<gra[s].size();++i){
		if(!vis[gra[s][i]]){
			dfs(gra[s][i]);
		}
	}
}

void solve(){
	cin>>n;
	for(int i=0;i<n;++i){
		int v;
		cin>>v;
        gra[v]={};
		vis[v]=false;
	}
	
	cin>>m;

	for(int i=0;i<m;++i){
		int u,v;
		cin>>u>>v;
		gra[u].push_back(v);
	}

	cin>>sr>>ds;
	dfs(sr);
	cout<<(int)vis[ds]<<endl;
}

int main(){
	solve();
	return 0;	
}