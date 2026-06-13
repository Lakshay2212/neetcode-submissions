class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx = 0;
        int i = 0, j = 0;
        unordered_map<char,int> mpp;

        while(j < s.size()) {
            mpp[s[j]]++;

            while(mpp.size() < (j - i + 1)) {
                mpp[s[i]]--;
                if(mpp[s[i]] == 0)
                    mpp.erase(s[i]);
                i++;
            }

            mx = max(mx, j - i + 1);
            j++;
        }

        return mx;
    }
};