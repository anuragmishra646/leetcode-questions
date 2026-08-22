class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(),strs.end());
        int n= strs.size();
        int i = 0 ;
        while(i!=strs[0].size()){
            if(strs[0][i]==strs[n-1][i]){
                result  += strs[0][i];
                i++;
            }else{
                break;
            }
        }
        return result;
    }
};