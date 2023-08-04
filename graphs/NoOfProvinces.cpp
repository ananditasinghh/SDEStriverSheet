//APPROACH


/*

basically what we do is visit every node and do a dfs or bfs traversal.  
for (int i = 1 ; i < n ; i++){
    if (vis[i] == 0){
        count ++;
        dfs() || bfs();
    }
}
*/


class Solution {

private :

void dfs(int node, vector<vector<int>>& isConnected, vector<bool> &visit){
    visit[node] = true;
    for(int i = 0; i < isConnected.size(); i++){
        if(isConnected[node][i] && !visit[i]){
            dfs(i, isConnected, visit);
        }
    }
}

public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        int count = 0;
        vector<bool> visit(n);

        for(int i = 0 ; i < n; i++){
            if(!visit[i])
              count ++;
              dfs(i, isConnected, visit);

        }
        return count;
    }
};
