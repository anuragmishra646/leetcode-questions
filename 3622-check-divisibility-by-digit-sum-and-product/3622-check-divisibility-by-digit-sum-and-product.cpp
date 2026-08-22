class Solution {
public:
    bool checkDivisibility(int n) {
        int k = 0 ;
        int x = n;
        int h = n;
        int m = 1;
        while(x!=0){
            int y = x%10;
            k +=y;
            m *=y;
            x/=10;
        }int sum = m+k;
        if((h%sum)==0){
            return true;
        }else{
            return false;
        }
    }
};