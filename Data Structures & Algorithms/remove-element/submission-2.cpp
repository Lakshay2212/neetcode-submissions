class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = -1;
        for(int k=0;k<nums.size();k++){
            if(nums[k] == val){
                i = k;
                break;
            }
        }
        if(i == -1) return nums.size();
        int j= i+1;
        while(i<j && j<nums.size()){
            if(nums[j] == val){
                j++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return i;
    }
};