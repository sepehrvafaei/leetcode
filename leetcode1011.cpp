class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int total_w=0;
        int max=0;
        for(int i=0;i<weights.size();i++){
            total_w+=weights[i];
            if(weights[i]>max){max=weights[i];}
        }
        int low=max;
        int high=total_w;
        while (low<high){
            int wt=0;
            int days=1;
            int mid=(low+high)/2;
            for(auto &weight:weights){
                if(wt+weight>mid){
                    days+=1;
                    wt=0;
                }
                wt+=weight;
            }
            if(days>D){low=mid+1;}
            else{high=mid;}
        }
        return low;
    }
};
