class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int res=0;
       unordered_map<int,int>mp;
       int prefixSum=0;
       mp.insert({0,1});
       for(int num:nums){
            prefixSum+=num;
            if(mp.contains(prefixSum-k)){
                res+=mp[prefixSum-k];
            }
            mp[prefixSum]++;
       }
       return res;
       
    }
};