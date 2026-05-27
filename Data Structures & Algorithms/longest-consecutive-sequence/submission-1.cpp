class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        if(nums.size() == 0) return 0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int max_len = 1;
        for(int i=0;i<nums.size();i++){
            int len = 1;
            if(st.find(nums[i]-1) == st.end()){
                int temp = nums[i];
                while(st.find(temp+1) != st.end()){
                    len++;
                    temp++;
                }
                max_len = max(max_len,len);
            }
        }
        return max_len;
    }
};
