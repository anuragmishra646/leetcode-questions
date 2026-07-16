class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        vector<int> prefgc;
        for(int i = 0 ; i<n;i++){
            mx = max(mx,nums[i]);
            prefgc.push_back(gcd(nums[i],mx));
        }
        sort(prefgc.begin(),prefgc.end());
        long long ans = 0 ;
        int left = 0 ; int right = n-1;
        while(left<right){
            ans += gcd(prefgc[left],prefgc[right]);
            left++;
            right --; 
       }
       return ans;
    }
};