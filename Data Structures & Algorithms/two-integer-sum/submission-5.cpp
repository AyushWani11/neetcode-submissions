class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> idx;
        for(int i=0; i<nums.size(); i++){
            int x = target - nums[i];
            if(idx.find(x) != idx.end()) return {idx[x], i};
            idx[nums[i]] = i;
        }
    }
};
