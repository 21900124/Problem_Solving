#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, mood; // 날 수와 처음 기분을 입력받음
    double gg, gb, bg, bb; // 좋-좋 / 좋-싫 / 싫-좋 / 싫-싫 확률

    cin >> n >> mood >> gg >> gb >> bg >> bb;

    double goodSum[n]; // 기분이 좋을 확률을 더한 것을 저장할 변수
    double badSum[n];  // 기분이 나쁠 확률을 더한 것을 저장할 변수
    
    // 0으로 초기화
    for(int i = 0; i < n; i++){
        goodSum[i] = 0; 
        badSum[i] = 0;
    }

    if(mood == 0){ // 처음 기분이 좋을 경우
        goodSum[0] = gg; // 첫번째 합은 그 다음날도 기분이 좋을 확률
        badSum[0] = gb; // 첫번째 합은 그 다음날은 기분이 안좋을 확률
    }
    else{ // 처음 기분이 안좋을 경우
        goodSum[0] = bg; // 첫번째 합은 그 다음날은 기분이 좋을 확률
        badSum[0] = bb; // 첫번째 합은 그 다음날도 기분이 안좋을 확률
    }

    for(int i = 1; i < n; i++){
        goodSum[i] = goodSum[i-1] * gg + badSum[i-1] * bg; // 이전good - 현재good + 이전bad - 현재good
        badSum[i] = badSum[i-1] * bb + good[i-1] * gb; // 이전bad - 현재bad + 이전good - 현재bad
    }
    cout << round(goodSum[n-1] * 1000) << endl; // 소수점 첫번재자리에서 반올림
    cout << round(badSum[n-1] * 1000) << endl;
    
    return 0;
}
