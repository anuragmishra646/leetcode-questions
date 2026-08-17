class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int e = heights.size();
        vector <int>arr = heights;
        sort(arr.begin(),arr.end());
        int count = 0 ;
        for(int i =0 ; i<e;i++){
            if(arr[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};