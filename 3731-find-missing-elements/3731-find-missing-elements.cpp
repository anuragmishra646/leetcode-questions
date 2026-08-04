class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> leeftones;
        int max = nums[0];
        int min = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
            }
            if(nums[i]<min){
                min = nums[i];
            }
        }
        if((max-min)==nums.size()-1){
            return leeftones;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++){
            for(int j = nums[i]+1;j<nums[i+1];j++){
                leeftones.push_back(j);
            }
        }
        return leeftones;
    }
};