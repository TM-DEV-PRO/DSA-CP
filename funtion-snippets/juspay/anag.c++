#include <bits/stdc++.h>
using namespace std;
int n,m,sr,ds;
vector<int,int> gra[1000005];
bool vis[1000005];
queue<int> q;
vector<int>ans;

void minCut(){
	vis[sr] = true;
	q.push(sr);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i=0;i<gra[x].size();++i){
			if(!vis[gra[x][i]]){
				if(gra[x][i]==ds){
					ans.push_back(x);
				}else {
					vis[gra[x][i]] = true;
					q.push(gra[x][i]);
				}
			}
		}
	}

	sort(ans.begin(),ans.end());
}


void solve(){
	cin>>n;
	for(int i=0;i<n;++i){
		int v;
		cin>>v;
		gra[v]={};
		vis[v] = false;
	}
	cin>>m;
	for(int i=0;i<m;++i){
		int u,v;
		cin>>u>>v;
		gra[u].push_back(v);
	}
	cin>>sr>>ds;
	minCut();
}

int main(){
	
    solve();
	for(auto x:ans)
		cout<<x<<" ";
	return 0;
}
