class Solution {
public:
    int maxProduct(int n) {
        int m = INT_MIN;
        int j = m;
        while(n!=0){
            int x = n%10;
            if(x>=m){
                j=m;
                m = x;
            }
            else if(x<m&&x>j){
                j = x;
            }
            n/=10;
        }
        return m*j;
    }
};