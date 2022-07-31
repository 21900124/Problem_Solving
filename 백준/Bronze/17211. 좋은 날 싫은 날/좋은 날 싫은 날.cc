#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, mood;
    double gg, gb, bg, bb;

    cin >> n >> mood >> gg >> gb >> bg >> bb;

    double good[n];
    double bad[n];

    for(int i = 0; i < n; i++){
        good[i] = 0;
        bad[i] = 0;
    }

    if(mood == 0){
        good[0] = gg;
        bad[0] = gb;
    }
    else{
        good[0] = bg; 
        bad[0] = bb;
    }

    for(int i = 1; i < n; i++){
        good[i] = good[i-1] * gg + bad[i-1] * bg;
        bad[i] = bad[i-1] * bb + good[i-1] * gb;
    }
    cout << round(good[n-1] * 1000) << endl;
    cout << round(bad[n-1] * 1000) << endl;
    
    return 0;
}
