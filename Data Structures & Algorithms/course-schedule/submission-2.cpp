class Solution {
public:
    bool bfs(int numCourses, vector<vector<int>>& adj,
             vector<int>& indegree, vector<bool>& visited, int nums) {

       
        while (nums != adj.size()) {
            for (int i = 0; i < adj[nums].size(); i++) {
                indegree[adj[nums][i]]++;
            }
            nums++;
        }

        queue<int> q;

    
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                visited[i] = true;
                q.push(i);
            }
        }

        int count = 0;

        while (!q.empty()) {
            int a = q.front();
            q.pop();
            count++;

            for (auto it : adj[a]) {
                indegree[it]--;

                if (indegree[it] == 0 && !visited[it]) {
                    visited[it] = true;
                    q.push(it);
                }
            }
        }

        return count == numCourses;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        for (auto &it : prerequisites) {
            int u = it[1];
            int v = it[0];
            adj[u].push_back(v);
        }

        vector<int> indegree(numCourses, 0);
        vector<bool> visited(numCourses, false);

        return bfs(numCourses, adj, indegree, visited, 0);
    }
};