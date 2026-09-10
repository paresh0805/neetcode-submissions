class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mini=prices[0];
        for(auto p: prices){
            ans=max(ans,p-mini);
            mini=min(p, mini);
        }
        return ans;
    }
};
