class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long z = x;
        long r = 0;
        while(x!=0){
        long y = x%10;
        r = r*10+y;
        x/=10;
}
return z == r;

    }
};