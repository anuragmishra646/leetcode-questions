class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prebig;
        vector<int> suffmin;
        int maxi = INT_MIN;
        for(int i =0 ; i<n;i++){
            maxi = max(maxi,nums[i]);
            prebig.push_back(maxi);
        }
        int mini = INT_MAX;
        for(int i = n-1;i>=0;i--){
            mini = min(mini,nums[i]);
            suffmin.push_back(mini);
        }
        reverse(suffmin.begin(),suffmin.end());
        for(int i = 0 ; i<n;i++){
            if((prebig[i]-suffmin[i])<=k){
                return i ;
            }
        }
        return -1;
    }
};