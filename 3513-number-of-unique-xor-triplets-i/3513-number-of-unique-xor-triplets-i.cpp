class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        int x = 32-__builtin_clz(n);
        if(nums.size()<=2){
            return n;
        }
        return 1<< x;
    }
};