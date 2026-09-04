class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner = arr[0];
        int x = 0;
        int n = arr.size();
        for(int i = 1;i<n;i++){
            if(winner>arr[i]){
                x++;
            }
            else{
                winner = arr[i];
                x = 1 ;
            }
            if(x==k){ 
               return winner;
            }
           }return *max_element(arr.begin(),arr.end());
       }
};