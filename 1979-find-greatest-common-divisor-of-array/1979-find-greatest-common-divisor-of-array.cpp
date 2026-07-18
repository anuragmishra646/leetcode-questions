class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0 ; int j = nums.size()-1;
        int a = gcd(nums[i],nums[j]);
        return a; 
    }
};