#include <algorithm> 
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0){return 0;}
        if(coins.size()==0){return -1;}
        if(coins.size()==1){
            if(amount%coins[0]==0){return amount/coins[0];}
            else{return -1;}
        }
        vector<int> vec1(amount+1,0);
        vector<int> vec2;
        vec2.push_back(0);
        for(int i=1;i<amount+1;i++){
            if(i%coins[0]==0){vec1[i]=i/coins[0];}
            else{vec1[i]=-1;}
        }
        for(int i=1;i<coins.size();i++){
            int boundary=min(coins[i],amount+1);
            for(int j=1;j<boundary;j++){vec2.push_back(vec1[j]);}
            for(int j=coins[i];j<amount+1;j++){
                int temp=vec2[j-coins[i]];
                if(temp==-1){vec2.push_back(vec1[j]);}
                else{
                    if(vec1[j]==-1){vec2.push_back(temp+1);}
                    else{vec2.push_back(min(temp+1,vec1[j]));}
                }
            }
            vec1=vec2;
            vec2.clear();
            vec2.push_back(0);
        }
        return vec1[amount];
    }
};
//Runtime: 116 ms, faster than 41.39% of C++ online submissions for Coin Change.
//Memory Usage: 24.7 MB, less than 11.47% of C++ online submissions for Coin Change.
