class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int mdiff = -1;
        for(int x:nums){
            if(x>mini){
                mdiff = max(x-mini,mdiff);
            }                mini = min(x,mini);

        }
        return mdiff;
    }
};