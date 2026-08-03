class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i = 0;
        char c;
        while(true){
            for(int j=0; j<strs.size(); j++){
                if(i>=strs[j].size()) return ans;
                if(strs[0][i]!=strs[j][i]) return ans;
            }
            ans += strs[0][i];
            i++;
        }
        return ans;
    }
};