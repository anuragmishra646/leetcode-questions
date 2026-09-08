class Solution {
public:
    int countCommas(int n) {
        int x=0;
        for(int i=1;i<=n;i++){
            string s=to_string(i);
            for(int j=s.size()-1;j>=3;j-=3){
                x++;
            }
        }
        return x;
    }
};