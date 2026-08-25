class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        for(int i  = 1 ; i<1000;i++){
            int x = k*i;
            if(s.find(x)==s.end()){
                return x;
            }
        }
        return -1;
    }
};