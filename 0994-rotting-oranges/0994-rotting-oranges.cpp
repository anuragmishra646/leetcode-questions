class Solution {
public:
    void calcmint(vector<vector<int>>& grid,queue<pair<int,int>> qu, int& mint , int& fo){
        int rows = grid.size();
        int cols = grid[0].size();
        int dor[] = {-1,1,0,0};
        int doc[] = {0,0,-1,1};
        while(!qu.empty()){
            auto cell = qu.front();
            qu.pop();
            if(cell.first==-1&&cell.second == -1){
                mint++;
                if(!qu.empty())
                qu.push({-1,-1});
                continue; 
            }
            int r = cell.first;
            int c = cell.second;
            for(int i = 0 ; i<4;i++){
                int nr = r+dor[i];
                int nc = c+doc[i];
                if(nr>=0&&nc>=0&&nr<rows&&nc<cols&&grid[nr][nc] == 1 ){
                    grid[nr][nc]=2;
                    fo--;
                    qu.push({nr,nc});
                }
            }
            }
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> qu;
        int rows = grid.size();
        int cols = grid[0].size();
        int fo =0;
        for(int i = 0 ; i<rows;i++){
            for(int j = 0 ; j<cols;j++){
                if(grid[i][j]==2){
                qu.push({i,j});
                }if(grid[i][j]==1){
                    fo++;
                }
            }
        }qu.push({-1,-1});
         int mint = 0;
        if(fo==0){
            return 0;
        }
        calcmint(grid,qu,mint,fo);
        if(fo>0){
            return -1;
        }
        else{
            return mint-1;
        }
    }
};