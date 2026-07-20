class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size();//rows
        int c = grid[0].size();//columns;
        int total = r*c;
        if(k>r){
            k=k%total;
        }
        vector<vector<int>> ans(r,vector<int> (c));
        for(int i = 0 ; i <r;i++){
            for(int j = 0 ; j<c;j++){
               int oldidx = i*c+j;
               int newidx = (oldidx+k)%total;
                int newrow = newidx/c;
                int newrows = newidx%c;
                ans[newrow][newrows] = grid[i][j];
           }
        }
        return ans;
    }
};