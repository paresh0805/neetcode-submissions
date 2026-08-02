class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        int left=0;
        set<char>charSet;
        for(int right=0;right<s.size();right++){
            while(charSet.count(s[right])){
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
