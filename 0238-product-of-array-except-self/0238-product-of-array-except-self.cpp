class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;
        vector<int> pre;
        vector<int> suff;

        // Prefix
        pre.push_back(1);
        int mult = 1;

        for(int i = 1; i < n; i++) {
            mult *= nums[i - 1];
            pre.push_back(mult);
        }

        // Suffix
        suff.push_back(1);
        int multi = 1;

        for(int i = n - 2; i >= 0; i--) {
            multi *= nums[i + 1];
            suff.push_back(multi);
        }

        // suff currently right-to-left hai
        reverse(suff.begin(), suff.end());

        // Answer
        for(int i = 0; i < n; i++) {
            ans.push_back(pre[i] * suff[i]);
        }

        return ans;
    }
};