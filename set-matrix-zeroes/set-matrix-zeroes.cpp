class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        set<int>row,col;
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                if(matrix[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                if(row.count(i) || col.count(j))
                    matrix[i][j] = 0;
            }
        }
    }
};