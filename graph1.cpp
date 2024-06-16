#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<set<int>> graph ;
        for (int i = 0 ; i<edges.size();i++)
        {
            int a = edges[i].first ;
            int b = edges[i].second;
            graph[a].insert(b) ;
            graph[b].insert(a) ;
        }
        vector<vector<int>> ans ; 
        for(int i = 0 ; i<graph.size();i++)
        {
            for (auto number:graph[i])
            {
                ans[i].push_back(number) ; 
            }
        } 
        return ans ;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V;
        cin >> V;
        int E;
        cin >> E;
        vector<pair<int,int>> edges;
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            edges.push_back({u,v});
        }
        Solution obj;
        vector<vector<int>> ans = obj.printGraph(V, edges);
        for(int i = 0; i < ans.size(); i++)
        {
            for(int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}