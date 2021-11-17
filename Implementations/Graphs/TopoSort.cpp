vector<int> adj[MX];
bool visited[MX];
vector<int> Tsort;
int n; // Number of vertices

void dfs(int curr){
    visited[curr] = true;
    for(int x : adj[curr]) if(!visited[x]) dfs(x);
	Tsort.push_back(curr);
}

void topoSort(){
	for(int i = 1; i <= n; i++){
		if(!visited[i]) dfs(i);
	}
	reverse(Tsort.begin(), Tsort.end());
}
