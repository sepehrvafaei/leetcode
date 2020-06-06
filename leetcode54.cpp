class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> S;
        if(matrix.empty()){return {};}
        int left=0,right=matrix[0].size(),buttom=matrix.size(),top=0;
        while(left<right && top<buttom){
            for(int i=left;i<right;i++){S.push_back(matrix[top][i]);}
            top+=1;
            for(int i=top;i<buttom;i++){S.push_back(matrix[i][right-1]);}
            right-=1;
            if(buttom>top){
                for(int i=right-1;i>=left;i--){S.push_back(matrix[buttom-1][i]);}
                buttom-=1;
            }
            if(left<right){
                for(int i=buttom-1;i>=top;i--){S.push_back(matrix[i][left]);}
                left+=1;
            }
        }
        return S;
    }
};
/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Spiral Matrix.
Memory Usage: 7 MB, less than 31.44% of C++ online submissions for Spiral Matrix.
*/
