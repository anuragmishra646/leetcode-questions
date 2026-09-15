class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ar; 
        for(int i = 1;i<=n;i++){
            if(i%15==0) ar.push_back("FizzBuzz");
            else if(i%3==0) ar.push_back("Fizz");
            else if(i%5==0) ar.push_back("Buzz");
            else ar.push_back(to_string(i)); 
        }
        return ar;
    }
};