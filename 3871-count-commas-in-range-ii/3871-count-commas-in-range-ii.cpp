class Solution {
public:
    long long countCommas(long long n) {
       long long  s = 0 ;
       long long  x = 1000;
       while(n>=x){
            s+=(n-x+1);
            x*=1000;
       } 
       return s;
    }
};