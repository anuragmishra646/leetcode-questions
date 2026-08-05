class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m = nums.size();
        int n = nums[m-1];
        
        if(m!=n+1){
            return false;
        }
        if(nums[m-1]!=nums[m-2]){
            return false;
        }
        for(int i = 1;i<=n-1;i++){
            if(nums[i-1]!=i){
                return false;
            }
        }
        return true;
    }
};