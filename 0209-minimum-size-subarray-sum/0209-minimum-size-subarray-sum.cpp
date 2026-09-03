class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX; ;
        int curr = 0;
        int n = nums.size();
        int i = 0 ;
        int j = 0 ;
        while(i<n){
            curr+=nums[i];
            while(j<=i&&(curr - nums[j])>=target){
                curr -=nums[j];
                j++;
            }
            if(curr>=target){
                int m = (i-j)+1;
                ans = min(ans,m);
                
            }i++;
        }
        return (ans == INT_MAX?0:ans);
    }
};