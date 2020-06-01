#include<algorithm>
class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int S=A.size();
        if(S==0 || S==1){return 0;}
        sort(A.begin(),A.end());
        int L=A[0];
        int moves=0;
        for(int i=1;i<S;i++){
            if(A[i]<=L){
                moves+=(L+1-A[i]);
                A[i]=L+1;
                L=A[i];
            }
            else{
                L=A[i];
            }
        }
        return moves;
        }
};
//Runtime: 164 ms, faster than 48.02% of C++ online submissions for Minimum Increment to Make Array Unique.
//Memory Usage: 25.9 MB, less than 16.67% of C++ online submissions for Minimum Increment to Make Array Unique.
