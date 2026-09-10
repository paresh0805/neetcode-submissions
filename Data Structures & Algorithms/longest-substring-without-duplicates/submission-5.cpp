class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>ch;
        int max_len=0;
        int left=0;
        for(int right=0;right<s.size();right++){
            while(ch.count(s[right])){
                ch.erase(s[left]);
                left++;
            }
            ch.insert(s[right]);
            max_len=max(max_len, right-left+1);
        }
        return max_len;
    }
};
