class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);
        vector<int> ans;
        // graph + indegree create karo
        for (int i = 0; i < prerequisites.size(); i++) {
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            graph[v].push_back(u);
            indegree[u]++;
        }
        queue<int> q;

        // jinka indegree 0 hai, unko queue mein daalo
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }
        int count = 0;

        while (!q.empty()) {
            int u = q.front();
            ans.push_back(u);
            q.pop();
            count++;
            // u ke neighbours process karo
            for (int i = 0; i < graph[u].size(); i++) {

                int v = graph[u][i];

                indegree[v]--;

                if (indegree[v] == 0)
                    q.push(v);
            }
        }
        if(ans.size() != numCourses)
            return {};

        return ans;
    }
};