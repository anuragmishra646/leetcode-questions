class Solution {
public:

    void dfs(int node,
             vector<vector<int>>& adj,
             vector<int>& vis,
             int &nodes,
             int &degreeSum)
    {
        vis[node] = 1;          // node visit ho gaya

        nodes++;                // component me ek aur node aa gaya

        degreeSum += adj[node].size();   // is node ki degree add

        // neighbours par DFS
        for(auto it : adj[node])
        {
            if(!vis[it])
                dfs(it, adj, vis, nodes, degreeSum);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        // adjacency list
        vector<vector<int>> adj(n);

        for(auto &e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> vis(n,0);

        int ans = 0;

        // har node check karenge
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                int nodes = 0;
                int degreeSum = 0;

                dfs(i, adj, vis, nodes, degreeSum);

                // actual edges
                int edgesPresent = degreeSum / 2;

                // complete graph me honi chahiye
                int requiredEdges = nodes*(nodes-1)/2;

                if(edgesPresent == requiredEdges)
                    ans++;
            }
        }

        return ans;
    }
};