class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxWindow=0;
        int maxFreq=0;
        int left=0;
        int freq[26]={0};

        for(int right=0;right<s.size();right++){
            freq[s[right]-'A']++;
            maxFreq=max(maxFreq,freq[s[right]-'A']);
           int window=right-left+1;
            if(window-maxFreq > k){
                freq[s[left]-'A']--;
                left++;
            }
            window=right-left+1;
            maxWindow=max(window,maxWindow);
        }
        return maxWindow;
    }
};
