class Solution {
   public:
    vector<vector<string>> ans;

    bool isQ(vector<string> b, int x, int y) {
        // cout<<x<<" "<<y<<"\n";
        if (x < 0 || x >= b.size() || y < 0 || y >= b.size()) return false;
        if (b[x][y] == 'Q') return true;
        return false;
    }

    bool canPlace(vector<string> b, int x, int y) {
        for (int i = 0; i < b.size(); i++) {
            if (b[i][y] == 'Q') return false;
        }
        for (int i = 0; i < b.size(); i++) {
            if (isQ(b, x + i, y + i) || isQ(b, x + i, y - i) ||
                isQ(b, x - i, y - i) || isQ(b, x - i, y + i))
                return false;
        }
        return true;
    }

    void nq(vector<string> b, int l, int n) {
        // cout<<l<<"\n";
        if (l == n) {
            ans.push_back(b);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (canPlace(b, l, i)) {
                b[l][i] = 'Q';
                nq(b, l + 1, n);
                b[l][i] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> b;
        for (int i = 0; i < n; i++) {
            b.push_back("");
            for (int j = 0; j < n; j++) {
                b[i].push_back('.');
            }
        }
        nq(b, 0, n);
        return ans;
    }
};