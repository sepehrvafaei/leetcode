class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        int left=0,right=n,buttom=n,top=0;
        int x=1;
        while(left<right && top<buttom){
            for(int i=left;i<right;i++){matrix[top][i]=x;x+=1;}
            top+=1;
            for(int i=top;i<buttom;i++){matrix[i][right-1]=x;x+=1;}
            right-=1;
            if(buttom>top){
                for(int i=right-1;i>=left;i--){matrix[buttom-1][i]=x;x+=1;}
                buttom-=1;
            }
            if(left<right){
                for(int i=buttom-1;i>=top;i--){matrix[i][left]=x;x+=1;}
                left+=1;
            }
        }
        return matrix;
    }
};
