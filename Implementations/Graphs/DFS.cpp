vector<int> adj[MX];
bool visited[MX];

void dfs(int curr){
    visited[curr] = true;
    for(int x : adj[curr]) if(!visited[x]) dfs(x)
}
