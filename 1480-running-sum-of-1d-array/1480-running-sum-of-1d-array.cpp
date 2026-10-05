class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       
        int w =nums.size();
        vector<int> b(w);
        int s =b.size();
        b[0]=nums[0];
        for(int i=1;i<w;i++){
            b[i]=nums[i]+b[i-1];
        }
        return b;
    }
};