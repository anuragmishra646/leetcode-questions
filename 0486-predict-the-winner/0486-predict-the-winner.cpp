class Solution {
public:
    int solve(int i , int j , vector<int>& nums){
        if(i==j) return nums[i];
        int tl = nums[i]-solve(i+1,j,nums);
        int tr = nums[j]-solve(i,j-1,nums);
        return max(tl,tr);
    }
    bool predictTheWinner(vector<int>& nums) {
        if(solve(0,nums.size()-1,nums)>=0){
            return true;
        }else{
            return false ;
        }

    }
};