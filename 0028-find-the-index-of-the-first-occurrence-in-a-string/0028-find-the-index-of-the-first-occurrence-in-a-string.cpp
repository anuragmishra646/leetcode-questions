class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0 ; 
        int n = needle.size();
        int j = 0 ;
        while(j<haystack.size()){
            if(haystack[j]==needle[i]){
                i++;
                j++;
            
            if(i==n){
                return j-i;
                }
            }
            else{
                j = j-i+1;i = 0;
                
            }
        }
        return  -1;
    }
};