class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                ch.push(s[i]);
            }
            else {
                if (ch.empty()) return false;
                if ((s[i] == ')' && ch.top() != '(') ||
                    (s[i] == '}' && ch.top() != '{') ||
                    (s[i] == ']' && ch.top() != '[')) {
                    return false;
                }
                ch.pop();
            }
        }
        return ch.empty();
    }
};