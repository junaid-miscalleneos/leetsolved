class Solution {
public:
    bool check(int mid,vector<int>& weights, int days){
        int n=weights.size();
        int m=mid;
        int count=1;
        for(int i=0;i<n;i++){
            if(m>=weights[i])m=m-weights[i];
            else{
                count++;
                m=mid;
                m=m-weights[i];
            }
        }
         if(count>days) return false;
            else return true;
    }    
    int shipWithinDays(vector<int>& weights, int days) {
        int max=INT_MIN;
        int n=weights.size();
        int sum=0;
        for (int i=0;i<n;i++){
            if(max<weights[i])max=weights[i];
            sum=sum+weights[i];
        }
        int h=sum;
        int l=max;
        int mincapcity=sum;
        while(h>=l){
            int mid=(h+l)/2;
            if(check(mid,weights,days)){
                mincapcity=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
return mincapcity;
    }
};