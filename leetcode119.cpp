class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0){return {1};}
        vector<int> temp1;
        vector<int> temp2{1,1};
        for(int i=0;i<rowIndex-1;i++){
            temp1.clear();
            for(int j=0;j<temp2.size();j++){
                temp1.push_back(temp2[j]);
            }
            temp2.clear();
            temp2.push_back(1);
            for(int j=0;j<temp1.size()-1;j++){
                temp2.push_back(temp1[j]+temp1[j+1]);
            }
            temp2.push_back(1);
        }
        return temp2;
    }
};
