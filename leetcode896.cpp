class Solution {
public:
    int isMonotonic(vector<int>& A) {
        int j=-1;
        for(int i=0;i<A.size()-1;i++){
            if(A[i]>A[i+1]){
                j=i;
                break;}
        }
        if(j==-1){return true;}
        else if(j==0){
            for(int i=0;i<A.size()-1;i++){
                if(A[i]<A[i+1]){return false;}
            }
            return true;
        }
        else if(A[j-1]==A[j]){
            
            if(A[0]<A[j]){return false;}
            else{
                for(int i=j+1;i<A.size()-1;i++){
                    if(A[i]<A[i+1]){return false;}
                }
                return true;
            }
            
        }
        else{return false;}
        return false;

    }
};
//Runtime: 148 ms, faster than 64.74% of C++ online submissions for Monotonic Array.
//Memory Usage: 53 MB, less than 32.00% of C++ online submissions for Monotonic Array.
