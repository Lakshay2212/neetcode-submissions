class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,1);
        int pre = 1;
        for(int i=0;i<n-1;i++){
            pre*=nums[i];
            ans[i+1] = pre;
        }
        pre = 1;
        int i = n-1;
        while(i>=1){
            pre*=nums[i];
            ans[i-1] *= pre;
            i--;
        }
        return ans;
    }
};
