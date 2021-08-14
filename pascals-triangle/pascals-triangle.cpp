class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v(numRows);
        if(numRows == 0)
            return v;
        v[0] = vector<int> (1);
        v[0][0] = 1;
        for(int i=1;i<numRows;i++) {
            int len = i+1;
            v[i] = vector<int>(len);
            v[i][0] = v[i][len-1] = 1;
            for(int j=1;j<len-1;j++){
                v[i][j] = v[i-1][j-1]+v[i-1][j];
            }
        }
        return v;
    }
};