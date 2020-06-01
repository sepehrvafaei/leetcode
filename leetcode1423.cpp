class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
        int L=0;
        int S=cards.size();
        vector<int> left(k+1,0);
        left[0]=0;
        left[1]=cards[0];
        vector<int> right(k+1,0);
        right[0]=0;
        right[1]=cards[S-1];
        for(int j=2;j<k+1;j++){left[j]=(cards[j-1]+left[j-1]);}
        if(k==S){return left[k];}
        for(int j=2;j<k+1;j++){right[j]=(cards[S-j]+right[j-1]);}
        for(int j=0;j<k+1;j++){
            if(left[j]+right[k-j]>L){L=left[j]+right[k-j];}
        }
        return L;
    }
};
