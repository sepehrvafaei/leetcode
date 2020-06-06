class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int maxArea=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]!=0){
                    int max=0;
                    stack<pair<int,int>> S;
	                S.push(pair(i,j));
	                while (!S.empty()) {
		                pair<int,int> current =S.top();
		                S.pop();
		                if (grid[current.first][current.second]!=0){
			                max+=1;
			                grid[current.first][current.second]=0;
		                }
		                if(current.first>0 and grid[current.first-1][current.second]!=0){
                            S.push(pair(current.first-1,current.second));
                        }
                        if(current.first<rows-1 and grid[current.first+1][current.second]!=0){
                            S.push(pair(current.first+1,current.second));
                        }
                        if(current.second>0 and grid[current.first][current.second-1]!=0){
                            S.push(pair(current.first,current.second-1));
                        }
                        if(current.second<cols-1 and grid[current.first][current.second+1]!=0){
                            S.push(pair(current.first,current.second+1));
                        }
                        
	                }
                    if(max>maxArea){maxArea=max;}
                }
            }
        }
        return maxArea;
    }
};
