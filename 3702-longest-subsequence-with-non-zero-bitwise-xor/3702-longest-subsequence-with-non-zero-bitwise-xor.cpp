class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalxor = 0 ;
        int count = 0 ;
        for(int i = 0 ; i<nums.size();i++){
            totalxor ^= nums[i];
            if(nums[i]==0){
                count++;
            }
        }if(count == nums.size()){
            return 0;
        }
        if(totalxor != 0){
            return nums.size();
        }
        else{
            return nums.size()-1;
        }
    }
};