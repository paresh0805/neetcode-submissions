class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>sumCountMap;
        sumCountMap.insert({0,1});
        int res=0;
        int prefixsum=0;
        for(auto num:nums){
            prefixsum+=num;
            if(sumCountMap.contains(prefixsum-k)){
                res+=sumCountMap[prefixsum-k];
            }
            sumCountMap[prefixsum]++;
        }
        return res;
    }
};