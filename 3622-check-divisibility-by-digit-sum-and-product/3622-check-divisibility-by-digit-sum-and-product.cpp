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
            x/=10;
        }while(n!=0){
            int y = n%10;
            m *=y;
            n/=10;
        }int sum = m+k;
        if((h%sum)==0){
            return true;
        }else{
            return false;
        }
    }
};