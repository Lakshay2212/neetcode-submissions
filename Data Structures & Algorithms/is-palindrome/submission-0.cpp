class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                clean+= tolower(s[i]);
            }
        }
        int i=0,j=clean.length()-1;
        while(i<j){
            if(clean[i] != clean[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
