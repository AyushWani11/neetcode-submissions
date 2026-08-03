class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> ans;
        for(string s: strs){
            vector<int> freq(26, 0);
            for(char c: s){
                freq[c-'a']++;
            }
            ans[freq].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it: ans){
            res.push_back(it.second);
        }
        return res;
    }
};
