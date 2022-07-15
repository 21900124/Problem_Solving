// 핸드폰 요금
#include <iostream>

using namespace std;

int main(){
    int n;
    int seconds[20];
    int mQ = 0, yQ = 0, mR = 0, yR = 0;
    int mSum = 0, ySum = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> seconds[i];
        
        yQ = seconds[i] / 30;
        yR = seconds[i] % 30;
        if(yR != 0){
            ySum = ySum + yQ * 10 + 10;
        }
        else{
            ySum = ySum + (yQ + 1) * 10;
        }
        
        mQ = seconds[i] / 60;
        mR = seconds[i] % 60;

        if(mR != 0){
           mSum = mSum + mQ * 15 + 15;
        }
        else{
            mSum = mSum + (mQ + 1) * 15;
        } 
    }
    if(ySum < mSum){
        cout << "Y " << ySum << endl;
    }
    else if(ySum > mSum){
        cout << "M " << mSum << endl;
    }
    else if(ySum == mSum)
    {
        cout << "Y M " << mSum << endl;
    }

    return 0;
}
