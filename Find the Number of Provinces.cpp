void bfs(vector<int> adjLs[], vector<int> &vis,int start){
    queue<int> q;
    q.push(start);
    vis[start]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto &it:adjLs[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return;
}
int findNumOfProvinces(vector<vector<int>>& roads, int n) {
   
    vector<int> adjLs[n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(roads[i][j]==1 && i!=j){
                adjLs[i].push_back(j);
                adjLs[j].push_back(i);
            }
        }   
    }

    vector<int> vis(n,0);
    int ans=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            bfs(adjLs, vis,i);
            ans++;
        }
    }
    return  ans;
}
