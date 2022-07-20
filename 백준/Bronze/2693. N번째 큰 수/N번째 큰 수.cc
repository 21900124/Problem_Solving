#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;

    int a[n][10];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            cin >> a[i][j];
        }
        sort(a[i],a[i]+10);
        reverse(a[i],a[i]+10);
    }
    for(int i = 0; i < n; i++){
        cout << a[i][2] << endl;
    }

    return 0;
}