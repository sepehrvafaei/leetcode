//O(1) space and O(n) time
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int New=nums[0];
        int size=nums.size();
        if(size==1){}
        else{
            int j=k%size;
            int cycle=0;
            int CYCLE=0;
            for(int i=0;i<size;i++){
                if(j==0){
                    nums[j]=New;
                    CYCLE=cycle;
                    cycle=0;
                    j+=1;
                    New=nums[j];
                    j=(j+k)%size;
                    continue;
                }
                if(cycle==CYCLE && cycle!=0){
                    nums[j]=New;
                    cycle=0;
                    j+=1;
                    New=nums[j];
                    j=(j+k)%size;
                    continue;
                }
                int temp=nums[j];
                nums[j]=New;
                New=temp;
                j=(j+k)%size;
                cycle+=1;
            }
        }
    }
};
