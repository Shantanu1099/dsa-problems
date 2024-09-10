class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        int val;
        for(auto & value : nums){
            mp[value]++;
        }
        for(auto & pr : mp ){
            if(pr.second == 1) val = pr.first;
        }
        return val;
    }   
};