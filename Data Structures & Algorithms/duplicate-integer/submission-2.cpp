class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int x: nums){
            if(freq.find(x)!=freq.end()) return true;
            freq[x]++;
        }
        return false;
    }
};