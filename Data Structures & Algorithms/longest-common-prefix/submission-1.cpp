class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string minlen = strs[0];
        for(int i=1;i<strs.size();i++){
            if(strs[i].length()<minlen.length()){
                minlen = strs[i];
            }
        }
        int i=0;
        string ans = "";
        bool flag = true;
        while(i<minlen.length()){
            char c = minlen[i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i] != c){
                    flag = false;
                }
            }
            if(flag == true) ans+=c;
            i++;
        }
        return ans;
    }
};