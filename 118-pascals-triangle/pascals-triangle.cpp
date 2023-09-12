class Solution {
    int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
public:
    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col<row; col++){
            ans = ans*(row-col);
            ans = ans/(col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};