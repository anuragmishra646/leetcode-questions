class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        queue<pair<int,int>> qu;
        vector<vector<int>> ans(rows, vector<int>(cols,-1));
        for(int i = 0 ; i<rows;i++){
            for(int j = 0 ; j<cols ; j++){
                if(mat[i][j]==0){
                    qu.push({i,j});
                    ans[i][j]=0;
                }
            }
        }
        int dr[] = {-1,1,0,0};
        int dl[] = {0,0,-1,1};
        while(!qu.empty()){
            auto cell = qu.front();
            qu.pop();
            int r = cell.first;
            int c = cell.second;
            for(int k =0;k<4;k++){
                int nr = r+dr[k];
                int nc = c+dl[k];
                if(nr>=0&&nr<rows&&nc>=0&&nc<cols&&ans[nr][nc]==-1){
                    ans[nr][nc] = ans[r][c]+1;
                    qu.push({nr,nc});  
                }
            }
        }
        return ans;
    }
};