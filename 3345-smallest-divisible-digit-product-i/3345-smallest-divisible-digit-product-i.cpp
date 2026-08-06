class Solution {
public:
    int smallestNumber(int n, int t) {
        if(n<10 ){
            for(int i = 0 ;i<10;i++){
        if((n%10)%t == 0){
            return n;
        }else{
            n = n+1;
        }
    }
        }
    for(int i = 0 ;i<10;i++){
        if(((n%10)*(n/10))%t == 0){
            return n;
        }else{
            n = n+1;
        }
    }
    return n;
    }
};