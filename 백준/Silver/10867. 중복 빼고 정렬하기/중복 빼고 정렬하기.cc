#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    int number[100000] = {0};
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> number[i];
    }
    sort(number,number+n);

    for(int i = 0; i < n; i++){
        if(number[i] != number[i+1]){
            cout << number[i] << " ";
        }
    }
    cout << endl;

    return 0;
}