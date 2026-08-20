class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;
        vector<int> result;
        arr1.push_back(nums[0]);
        int j = 0 ;
        arr2.push_back(nums[1]);
        int k = 0;
        for(int i = 2;i<n;i++){
            if(arr1[j]>arr2[k]){
                arr1.push_back(nums[i]);
                j++;
            }else{
                arr2.push_back(nums[i]);
                k++;
            }
        }
        for(auto& x: arr1){
            result.push_back(x);
        }
        for(auto& x: arr2){
            result.push_back(x);
        }
        return result;
    }
};