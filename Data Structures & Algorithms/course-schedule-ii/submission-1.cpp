
class Solution {
public:
  void bfs(int numCourses, vector<vector<int>>& adj,
             vector<int>& indegree, vector<bool>& visited, int nums, vector<int>&ans) {

        
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

             

        while (!q.empty()) {
            int a = q.front();
            q.pop();
         
  ans.push_back(a);
            for (auto it : adj[a]) {
                indegree[it]--;
               
                if (indegree[it] == 0 && !visited[it]) {
                    visited[it] = true;
                    q.push(it);
                }
            }
        }
       
     if(numCourses==ans.size()){
        return ;
     }
             }

       vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        for (auto &it : prerequisites) {
            int u = it[1];
            int v = it[0];
            adj[u].push_back(v);
        }

        vector<int> indegree(numCourses, 0);
        vector<bool> visited(numCourses, false);
         vector<int> ans;

        bfs(numCourses, adj, indegree, visited, 0,ans);
        if(numCourses==ans.size()){
        return ans;}
        else{
            return {};
        }
    }
             
};