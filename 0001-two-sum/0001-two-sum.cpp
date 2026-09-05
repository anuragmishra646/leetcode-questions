class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        int n = nums.size();
        for(int i = 0 ; i<n; i++){
            if(s.find(target-nums[i])!=s.end()){
                return {s[target-nums[i]],i};
            }else{s[nums[i]]=i;}
        }
        
    return{-1,-1};
    }
};