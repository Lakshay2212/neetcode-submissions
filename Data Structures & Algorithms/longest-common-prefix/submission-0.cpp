class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans = "";
        string first = strs[0];
        int k = 0;
        while(k<first.size()){
            char c = first[k];
        for(int i=1;i<strs.size();i++){
            
            string s  = strs[i];
            if(s[k] != c){
                return ans;
            }
            
        }
        ans+=c;
        k++;
        }
        return ans;
    }
};