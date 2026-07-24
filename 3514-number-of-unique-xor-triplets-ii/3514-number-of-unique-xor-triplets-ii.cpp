class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        int m =0;
        for(int v:nums){
            m= max(m,v);
        }
        int u =1;
        while(u<=m){
            u <<= 1;
        }
        vector<int> s(u);
        for(int i =0;i<n;i++){
            for(int j = i;j<n;j++){
                s[nums[i]^nums[j]]=1;
            }
        }        
        vector<int>t(u);
        for(int i = 0 ; i<u;i++){
            if(s[i]==0){
                continue;
            }
            for(int v:nums){
                t[i^v]=1;
            }
        }
        int ans = 0 ;
        for(int i = 0 ; i<u;i++){
            if(t[i]==1){
                ans++;
            }
        }
        return ans;
    }
};