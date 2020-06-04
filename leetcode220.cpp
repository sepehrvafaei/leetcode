class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if(t<0){return false;}
        set<long long> set;
        long long temp;
        for(int i =0; i < nums.size(); i++){
            if(i>k){set.erase(nums[i-k-1]);}
            temp=nums[i];temp-=t;
            auto pos = set.lower_bound(temp);
            if(pos != set.end() && *pos - nums[i] <= t){return true;}
            set.insert(nums[i]);
        }
        return false;
    }
};
