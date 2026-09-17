class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i = 0  ; i<k;i++){
            sum+=nums[i];
        }
        double maxsum = sum ;
        for(int i = 1; i+k<=nums.size();i++){
            int j = i+k-1;
            sum = sum-nums[i-1]+nums[j];
            maxsum = max(sum,maxsum);
        }
        double  ans = maxsum/k;
        return ans;
    }
};