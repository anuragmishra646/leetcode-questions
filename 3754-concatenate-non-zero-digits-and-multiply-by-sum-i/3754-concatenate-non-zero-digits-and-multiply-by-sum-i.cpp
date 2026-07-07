class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        int k = 0;
        int arr[10];
        while(n!=0){
            if(n%10 == 0){
                n/=10;
            }
            else{
                arr[k++] = n%10;
                n/=10;
            }
        }
    int sum = 0 ;
    for(int i = k-1;i>=0;i--){
        x = x*10+arr[i];
        sum +=arr[i];

    }
    return x*sum;
    }
};