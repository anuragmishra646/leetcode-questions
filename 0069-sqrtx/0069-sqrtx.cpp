class Solution {
public:
int solve(int i , int j , int x , int ans){
    if(i>j){
        return ans;
    }
    long long mid = i+(j-i)/2;
        if(mid*mid==x){
            return mid;
        }
        else if (mid*mid>x){
            return solve(i,mid-1,x,ans);
        }else{
            return solve(mid+1,j,x,mid);
        }
    }

    int mySqrt(int x) {
        return solve(0,x,x,0);
    }
};