class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = INT_MIN;
        int count =0;
        int a =0;
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = max(nums[i],maxi);
            }
        }
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==maxi){
                count++;
                a= max(a,count);
            }else count = 0 ;
        }
        return a;
    }
};