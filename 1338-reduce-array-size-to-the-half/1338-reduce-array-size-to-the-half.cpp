class Solution {
public:
    int minSetSize(vector<int>& nums) {
        unordered_map<int,int> s;
        vector<int> freq;
        for(int x : nums ){
            s[x]++;
        }
        for(auto x:s){
            freq.push_back(x.second);
        }   
        sort(freq.begin(), freq.end(), greater<int>());
        int removed = 0;
        int count = 0;
        int target = nums.size()/2;
        for(int i: freq){
            removed += i;
            count++;
            if(removed>= target) return count;
        }
        return count;
    }
};