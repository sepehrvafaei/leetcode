class Solution {
public:
    vector<int> grayCode(int n) {
        if(n==0){return {0};}
        vector<int> nums;
        for(int i=0;i<pow(2,n);i++){
            nums.push_back(i^(i>>1));
        }
        return nums;
    }
};
