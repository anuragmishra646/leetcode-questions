class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int m = nums.size();
        vector<int> num(m);
        int count=0;
        for(int i = 0 ; i<m;i++){
            if(nums[i]%2==0){
                count++;
            }
        }
        int evencount = 0 ;
        for(int i = 0 ; i<m;i++){
            if(nums[i]%2==0){
                num[evencount] = nums[i];
                evencount++;
            }else {
                num[count] = nums[i];
                count++;
            }
        }
        return num;
    }
};