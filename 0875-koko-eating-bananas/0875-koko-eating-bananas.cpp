class Solution {
public:
bool check(int speed,vector<int>&piles, int h){
    long long  count =0;
    int n= piles.size();
    for(int i =0;i<n;i++){
        if(speed>=piles[i]) count++;
        else if(piles[i]%speed==0)count+=piles[i]/speed;
        else count+=piles[i]/speed +1;
    }
    if(count>h) return false ;
    else return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n =piles.size();
        int max=INT_MIN;
        for(int i =0;i<n;i++){
            if(max<piles[i])max=piles[i];


        }
        int l=1;
         int hi=max;
        int ans =-1;
        while(l<=hi){
            int mid=(hi+l)/2;
            if (check(mid,piles,h)==true){
                ans =mid;
                hi=mid-1;
            }
            else l=mid+1;
      
         }
         return ans;
    }

};