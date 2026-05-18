class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int i=1;
        int x = nums[0];
        while(i<nums.size()){
            if(nums[i] == x){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                x = nums[i];
                count = 1;
            }
            i++;
        }
        return x;
    }
};