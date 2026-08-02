class Solution {
public:
vector<vector<int>> dp;
    int calcscore(vector<int>& piles, int i , int j){
    if(i==j)return piles[i];
    if(dp[i][j] != INT_MIN){
        return dp[i][j];
    }
    int ls = calcscore(piles,i+1,j);
    int rs = calcscore(piles,i,j-1);
    return dp[i][j] =  max(
        piles[i]-ls,
        piles[j]-rs
    );
    }
    bool stoneGame(vector<int>& piles ) {
        int n = piles.size();
        dp.resize(n, vector<int>(n, INT_MIN));  
        int m = calcscore(piles, 0,piles.size()-1);
        return m>0;
    }
};