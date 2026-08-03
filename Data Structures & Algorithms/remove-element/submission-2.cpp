class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size() - 1;
        while (j >= 0 && nums[j] == val) j--;
        if (j == -1) return 0;
        int k = j + 1;

        for (int i = 0; i < nums.size() && i < j; i++) {
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                
                while (j >= 0 && nums[j] == val) {
                    j--;
                    k--;
                }
            }
        }
        return k;
    }
};