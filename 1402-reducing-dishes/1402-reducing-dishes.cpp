class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());

        vector<int>suf(n+1,0);
         suf[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+satisfaction[i];

        }
        int k=-1;
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
                k=i;
                break;
            }
        }
            if(k==-1)return 0;
        
        
        int x=1;
        int maxsum =0;
        for(int i=k;i<n;i++){
            maxsum+=satisfaction[i]*x;
            x++;
        }
        return maxsum;
    }
};