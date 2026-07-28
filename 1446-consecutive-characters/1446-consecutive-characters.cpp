class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int i  =0 ;
        int j = 1;
        int count =1;
        int ncount =1;
        while(j!=n){
            if(s[i]==s[j]){
                count++;
            }
            else{
                count = 1;
            }
            if(count>ncount){
                ncount = count;
            }
            i++;
            j++;
        }
        return ncount;
    }
};