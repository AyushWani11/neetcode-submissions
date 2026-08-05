class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size(), 1);
        vector<int> suff(nums.size(), 1);
        int n= nums.size();
        for(int i=1; i<nums.size(); i++){
            pref[i] = pref[i-1]*nums[i-1];
            suff[n-i-1] = suff[n-i]*nums[n-i];
        }

        vector<int> res(nums.size());

        for(int i=0; i<nums.size(); i++){
            res[i] = pref[i]*suff[i];
        }

        return res;

    }
};
