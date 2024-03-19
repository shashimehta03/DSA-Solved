// storing the data in 2D array where space complexity is more 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int adj[n+1][m+1]={0};
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cout << "Adjacency Matrix:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// storing the data in list which in vector in c++ where we store the adjecent element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    cout << "Adjacency list" << endl;
    for (int u = 1; u <= n; u++) {
        cout << "Vertex " << u << ": ";
        for (int v : adj[u]) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
// creating and printing Graph
vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    vector<vector<int>> ans(n);
    for(int i=0;i<n;i++){
        ans[i].push_back(i);
    }
    for(auto& edge:edges){
        int u=edge[0];
        int v=edge[1];
        ans[u].push_back(v);
        ans[v].push_back(u);

    }
    return ans;
}
