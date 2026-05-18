class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int x = i;
            if(mpp.find(target - nums[x])!=mpp.end()){
                ans.push_back(mpp[target-nums[x]]);
                ans.push_back(x);
                break;
            }
            mpp[nums[x]] = x;
        }
        return ans;
    }
};
