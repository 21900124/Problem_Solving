#include <iostream>

using namespace std;

int main(){
    
    int n; // 멀티탭 수
    int plugNum[500000];
    int totalPlug = 0;
    int available = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> plugNum[i];
        totalPlug += plugNum[i];
    }
    available = totalPlug - (n - 1);
    cout << available << endl;


    return 0;
}