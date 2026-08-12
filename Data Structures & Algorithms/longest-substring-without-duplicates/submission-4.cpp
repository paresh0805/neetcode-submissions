class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        set<char>charSet;
        int maxWindow=0;
       for(int right=0;right<s.size();right++){
            while(charSet.find(s[right])!=charSet.end()){
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
            maxWindow=max(maxWindow,right-left+1);
       }
       return maxWindow;

    }
};
