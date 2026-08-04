class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, std::greater<pair<int, int>>> pq;
        unordered_map<int, int> mp;
        for (int x : nums) mp[x]++;
        for (auto p : mp) {
            pq.push({p.second, p.first});
            if (pq.size() > k) pq.pop();
        }

        vector<int> ans;
        while(!pq.empty()){
            auto el = pq.top();
            pq.pop();
            ans.push_back(el.second);
        }
        return ans;
    }
};
