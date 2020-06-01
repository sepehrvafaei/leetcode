class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int rows=A.size();
        int cols=A[0].size();
        if(rows==cols){
            for(int i=0;i<rows-1;i++){
                for(int j=i+1;j< cols;j++){
                    int temp=A[i][j];
                    A[i][j]=A[j][i];
                    A[j][i]=temp;
                }
            }
        }
        else{
            vector<vector<int>> B;
	        B.resize(cols,vector<int>(rows,0));
            for(int i=0;i<rows;i++){
                for(int j=0;j< cols;j++){
                    B[j][i]=A[i][j];
                }
            }
            return B;
        }
        return A;
    }
};
