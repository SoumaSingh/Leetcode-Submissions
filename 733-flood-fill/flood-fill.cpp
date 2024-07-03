class Solution {
private:
int fastio = [] {std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
    void dfs(int row, int col, vector<vector<int>>& image,vector<vector<int>>& ans,
    int delrow[], int delcol[], int inicolor, int newcolor){
        ans[row][col]=newcolor;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor
            && ans[nrow][ncol]!=newcolor){
                dfs(nrow, ncol, image, ans, delrow, delcol, inicolor, newcolor);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        vector<vector<int>> ans=image;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        dfs(sr, sc, image, ans, delrow, delcol, inicolor, color);
    return ans;
    }
};