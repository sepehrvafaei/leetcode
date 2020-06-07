class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        vector<vector<int>> vec(R*C,vector<int>(2,0));
        int count=0;
        vec[count][0]=r0; vec[count][1]=c0;
        int r=1,d=1,l=2,u=2;
        while(count!=R*C-1){
            for(int i=0;i<r;i++){
                if(count==R*C-1){return vec;}
                c0+=1;
                if(c0<C && r0>=0 && c0>=0 && r0<R){count+=1;vec[count][0]=r0; vec[count][1]=c0;}
            }
            for(int i=0;i<d;i++){
                if(count==R*C-1){return vec;}
                r0+=1;
                if(r0<R && c0<C && r0>=0 && c0>=0){count+=1;vec[count][0]=r0; vec[count][1]=c0;}
            }
            for(int i=0;i<l;i++){
                if(count==R*C-1){return vec;}
                c0-=1;
                if(c0>=0 && r0<R && c0<C && r0>=0){count+=1;vec[count][0]=r0; vec[count][1]=c0;}
            }
            for(int i=0;i<u;i++){
                if(count==R*C-1){return vec;}
                r0-=1;
                if(r0>=0 && c0>=0 && r0<R && c0<C ){count+=1;vec[count][0]=r0; vec[count][1]=c0;}
            }
            r+=2;d+=2;l+=2;u+=2;
        }
        return vec;
    }
};
/*
Runtime: 20 ms, faster than 96.47% of C++ online submissions for Spiral Matrix III.
Memory Usage: 10.9 MB, less than 93.87% of C++ online submissions for Spiral Matrix III.
*/
