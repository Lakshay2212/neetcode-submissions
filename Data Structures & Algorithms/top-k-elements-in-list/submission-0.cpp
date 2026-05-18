class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto &it:mpp){
            minh.push({it.second,it.first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        vector<int>ans;
        while(minh.size()>0){
            auto x = minh.top();
            ans.push_back(x.second);
            minh.pop();
        }
        return ans;
    }
};
