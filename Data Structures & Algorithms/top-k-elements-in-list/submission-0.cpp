class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(auto n: nums){
            mp[n]++;
        }
        for(auto [num, freq] : mp){
            pq.push({freq, num});
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            int num=pq.top().second;
            ans.push_back(num);
            pq.pop();
        }
        return ans;
    }
};
