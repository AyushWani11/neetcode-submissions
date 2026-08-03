class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> idx;
        idx.reserve(nums.size());
        for(int i=0; i<nums.size(); i++){
            int x = target - nums[i];
            auto it = idx.find(x);
            if(it != idx.end()) return {it->second, i};
            idx[nums[i]] = i;
        }
    }
};
