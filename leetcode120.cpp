int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=triangle.size()-1;i>0;i--){
            for(int j=0;j<triangle[i].size()-1;j++){
                int min=triangle[i][j];
                if(min>triangle[i][j+1]){min=triangle[i][j+1];}
                triangle[i-1][j]+=min;
            }
        }
        return triangle[0][0];
    }
