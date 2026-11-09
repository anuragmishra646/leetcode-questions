class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        vector<int> v;
        for(auto x:mp){
            for(int i =0;i<x.second;i++){
                v.push_back(x.first);
            }
        }
        reverse(v.begin(),v.end());
        return v[k-1];
    }
};