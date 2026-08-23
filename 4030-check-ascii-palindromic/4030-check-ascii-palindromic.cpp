class Solution {
public:
    bool isPalindromic(string s) {
        int n = s.size();
        string binary = "";
        for(int i = 0 ;i<n;i++){
            int x = (int)s[i];
            string temp = bitset<8>(x).to_string();
            binary += temp;
        }
        int i = 0 ;
        int j = binary.size()-1;
        bool valid = true;
        while(i<j){
            if(binary[i]==binary[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return valid;
    }
};