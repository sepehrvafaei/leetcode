class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int order=graph.size();
        vector<int> grouped(order,0);
        list<int> queue;
        vector<bool> visited(order, false);
        for(int i=0;i<order;i++){
            if(graph[i].size()==0){grouped[i]=-1;continue;}
            if(grouped[i]!=0){continue;}
            else{
                queue.push_back(i);
                grouped[i]=-1;
                while (!queue.empty()) {
                    int current = queue.front();
                    queue.pop_front();
                    if (!visited[current])
                    {
                        visited[current] = true;
                    }
                    for (int &x : graph[current]) {
                        if(grouped[x]==0){grouped[x]=(-grouped[current]);}
                        else{if(grouped[x]==grouped[current]){return false;}}
                        if (!visited[x]) {queue.push_back(x); }
                    }
                }
                visited.clear();
                visited.assign(order,false);
            }
        }
        return true;
        }
};
//Runtime: 152 ms, faster than 5.08% of C++ online submissions for Is Graph Bipartite?.
//Memory Usage: 18.1 MB, less than 7.69% of C++ online submissions for Is Graph Bipartite?.
