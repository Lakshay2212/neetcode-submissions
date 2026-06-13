class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mpp;
        int maxfreq = 0;
        int i=0,j=0;
        int maxlen = 0;
        while(j<s.size()){
            mpp[s[j]]++;
            maxfreq = max(maxfreq,mpp[s[j]]);
            int change = (j-i+1) - maxfreq;
            if(change<=k){
                maxlen = max(maxlen,j-i+1);
                j++;
            }
            else{
                mpp[s[i]]--;
                i++;
                j++;
            }
        }
        return maxlen;
    }
};
