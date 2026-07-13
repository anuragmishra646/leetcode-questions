class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> arr;
       for(int start = 1 ; start<=9;start++){
        int num = start;
            for(int j = start+1;j<=9;j++){
            num = num*10+j;
            if(num>=low&&num<=high){
                arr.push_back(num);
            }}
       }
       sort(arr.begin(),arr.end());
       return arr;
    }
};