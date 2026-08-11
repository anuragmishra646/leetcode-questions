class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int m = nums.size();
        int j = 1;
        int sum = nums[0] ;
        
        while(j<m&&nums[j]==nums[j-1]+1){
            sum+=nums[j];
            j++;
        }
        unordered_set<int> st(nums.begin(),nums.end());
        while(st.find(sum)!= st.end()){
            sum++;
        }
        return sum;
    }
};