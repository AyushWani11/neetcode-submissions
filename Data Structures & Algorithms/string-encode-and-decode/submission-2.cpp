class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string s: strs){   
            ans += to_string(s.size());
            ans += '#';
            ans +=s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int len = s.size();
        int i = 0;
        vector<string> ans;
        while(i<len){
                int j = 0;
                while(s[i]!='#'){
                    j *= 10;
                    j += (s[i] - '0');
                    i++;
                }
                i++;
                string x = s.substr(i, j);
                i += j;
                ans.push_back(x);
        }
        return ans;
    }
};
