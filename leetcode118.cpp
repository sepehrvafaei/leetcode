class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0){return {};}
        if(numRows==1){
            vector<vector<int>> result{{1}};
            return result;}
        vector<vector<int>> result;
        result.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int> temp;
            temp.push_back(1);
                for(int j=1;j<i;j++){
                temp.push_back(result[i-1][j-1]+result[i-1][j]);
            }
            temp.push_back(1);
            result.push_back(temp);           
        }
        return result;
    }
};