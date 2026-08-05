class NumMatrix {
public:
    vector<vector<int>> matrix;
    vector<vector<int>> pref;
    NumMatrix(vector<vector<int>>& a) {
        matrix = a;
        pref = a;
        for(int i=0; i<pref.size(); i++){
            for(int j=1; j<pref[i].size(); j++){
                pref[i][j] = pref[i][j]+pref[i][j-1];
            }
        }
        for(int i=1; i<pref.size(); i++){
            for(int j=0; j<pref[i].size(); j++){
                pref[i][j] = pref[i][j]+pref[i-1][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        long long ans = 0;
        ans = pref[row2][col2];
        if(col1>0) ans -= pref[row2][col1-1];
        if(row1>0) ans -= pref[row1-1][col2];
        if(row1>0 && col1 > 0) ans += pref[row1-1][col1-1];

        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */