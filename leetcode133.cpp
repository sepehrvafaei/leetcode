/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==nullptr){return node;}
        map<Node*,Node*> cloneMap;
        map<int,bool> visited;
        queue<Node*> Q;
        Q.push(node);
        visited[1]=true;
        while(!Q.empty()){
            Node* temp=Q.front();
            Q.pop();
            
            if(cloneMap.count(temp)==0){
                Node* ptr=new Node(temp->val);
                cloneMap[temp]=ptr;
            }
            for(auto &x:temp->neighbors){
                if(cloneMap.count(x)==0){
                    Node* ptr_=new Node(x->val);
                    cloneMap[x]=ptr_;
                }
                cloneMap[temp]->neighbors.push_back(cloneMap[x]);
                if(!visited[x->val]){
                    visited[x->val]=true;
                    Q.push(x);
                }
            }
        }
        return cloneMap[node];
        
    }
};
//Runtime: 8 ms, faster than 94.01% of C++ online submissions for Clone Graph.
//Memory Usage: 8.9 MB, less than 100.00% of C++ online submissions for Clone Graph.
