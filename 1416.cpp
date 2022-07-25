// 1로 만들기
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int input;
    int dp[1000000]; 

    cin >> input;

    for(int i = 2; i <= input; i++){
        dp[i] = dp[i-1] + 1;

        if(i % 2 == 0){
            if(dp[i] > dp[i/2] + 1){
                dp[i] = dp[i/2] + 1;
            }
        }
        if(i % 3 == 0){
            if(dp[i] > dp[i/3] + 1){
                dp[i] = dp[i/3] + 1;
            }
        }  
    }
    cout << dp[input] << endl;
    
    return 0;
}