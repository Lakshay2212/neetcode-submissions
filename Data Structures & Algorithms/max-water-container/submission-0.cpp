class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i=0,j=n-1;
        int mx_area = INT_MIN;
        while(i<j){
            int ar = (j-i)*min(heights[j],heights[i]);
            mx_area = max(ar,mx_area);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mx_area;
    }
};
