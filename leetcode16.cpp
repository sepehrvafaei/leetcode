#include<cmath>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int close=nums[0]+nums[1]+nums[2];
        int size=nums.size();
        int minDif=abs(close-target);
        int j=0,k=0,temp=0;
        for(int i=0;i<size-2;i++){
            j=i+1;k=size-1;
            while(j<k){
                temp=nums[i]+nums[j]+nums[k]-target;
                if(abs(temp)<minDif){
                    close=temp+target;
                    minDif=abs(temp);
                }
                if(temp==0){return temp+target;}
                if(temp>0){k-=1;}else{j+=1;}
            }
            }
        return close;
    }
};
