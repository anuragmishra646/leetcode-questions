class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n  = nums1.size();
        int coo =0;
        int coe =0;
        for(int i = 0 ; i<n;i++){
            if(nums1[i]%2==0) coe++;
            else coo++;
        }
        if(coo==n||coe==n){
            return true;
        }
        int oddmin = INT_MAX;
        int evmin = INT_MAX;
        for(int i = 0 ; i<n;i++){
            if(nums1[i]%2==0) evmin = min(evmin,nums1[i]);
            else oddmin = min(oddmin,nums1[i]);
        }
        return evmin>oddmin;
    }
};