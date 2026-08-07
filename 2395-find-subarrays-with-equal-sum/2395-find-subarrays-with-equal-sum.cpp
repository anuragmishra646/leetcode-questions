class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        for(int i = 0; i<nums.size()-1;i++){
            int sum = nums[i]+nums[i+1];
            for(int j = i+1;j<nums.size()-1;j++){
                
                int count = nums[j+1]+nums[j]; 
                if(sum == count){
                    return true;
                }
            }
        }
        return false;
    }
};