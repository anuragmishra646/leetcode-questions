class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";
        for(int i = 0 ; i<n;i++){
            int count = 0;
            for(int j = i ; j<n;j++){
                if(s[j]=='1'){
                    count++;
                }
                if(count == k){
                    string temp = s.substr(i,j-i+1);if(ans==""||temp.size()<ans.size()||(temp.size()==ans.size()&&temp<ans)){
                    ans = temp;
                }break;
                }
                
                
            }
        }
        return ans;
    }
};