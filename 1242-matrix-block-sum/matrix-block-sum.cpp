class Solution {
    int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size(); int m=mat[0].size();
        vector<vector<int>>pref(n+1,vector<int>(m+1,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                pref[i+1][j+1]=pref[i+1][j]+mat[i][j];
            }
        }
for(int i=0;i<n;i++){for(int j=0;j<m;j++){pref[i+1][j+1]=pref[i+1][j+1]+pref[i][j+1];}}

vector<vector<int>>res(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int r1,c1,r2,c2;
                r1=max(0,i-k)+1; c1=max(0,j-k)+1;
                r2=min(i+k,n-1)+1; c2=min(j+k,m-1)+1;
                int ans=pref[r2][c2]-pref[r2][c1-1]-pref[r1-1][c2]+pref[r1-1][c1-1];
                res[i][j]=ans;
            }
        }
        return res;
    }
};