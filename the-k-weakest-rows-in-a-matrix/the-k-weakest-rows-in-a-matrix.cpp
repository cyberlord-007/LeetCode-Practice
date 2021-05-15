class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        vector<int> res;
        int i = 0;
        while (i < mat.size())
        {
            int count = 0;
            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    count++;
                }
            }
            v.push_back(count);
            i++;
        }
        vector<pair<int, int>> vp;
        for (int i = 0; i < v.size(); i++)
        {
            vp.push_back(make_pair(v[i], i));
        }
        sort(vp.begin(), vp.end());

        for (int i = 0; i < k; i++)
        {
            res.push_back(vp[i].second);
        }
        return res;
    }
};