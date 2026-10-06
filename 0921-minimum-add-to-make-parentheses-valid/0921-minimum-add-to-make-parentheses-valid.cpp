class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        int o=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') o++;
            else if( s[i]==')') { o--;
            c++;}
        }
        return abs(o+c);
    }
};