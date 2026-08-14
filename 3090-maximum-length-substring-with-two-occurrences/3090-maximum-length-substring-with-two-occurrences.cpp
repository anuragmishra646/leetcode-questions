class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> freq;
        int i = 0 ; int male=0;
        int n = s.size();
        for(int j = i;j<n;j++){
            freq[s[j]]++;
            while(freq[s[j]]>2){
                freq[s[i]]--;
                i++;
            }
        male = max(male,j-i+1);
        }
        return male;
    }
};