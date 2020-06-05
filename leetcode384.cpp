#include <cstdlib>
void swap (int &a, int &b)  
{  
    int temp = a;  
    a = b;  
    b = temp;  
}  
class Solution {
    vector<int> T;
    vector<int> O;
public:
    Solution(vector<int>& nums) {
        T=nums;
        O=nums;
    }
    
    vector<int> reset() {
        return O;
    }
    
    vector<int> shuffle() {
        for(int i=this->T.size()-1;i>0;i--){
            int j=rand()%(i+1);
            swap(this->T[j],this->T[i]);
        }
        return T;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
