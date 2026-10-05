class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int w=nums.size();
        vector<int> a(w);
        vector<int> b(w);
        a[0]=b[w-1]=1;
        a[1]=nums[0];
        b[w-2]=nums[w-1];

        for(int i=1;i<w;i++){
            a[i]=a[i-1]*nums[i-1];

        }
        for(int j=w-2;j>=0;j--){
            b[j]=b[j+1]*nums[j+1];
        }
        vector<int>k(w);
        for(int x=0;x<w;x++){
            k[x]=a[x]*b[x];
        }
        return k;
    }
};