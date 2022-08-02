//미완성
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int a, b;
    int arr[1000] = {};
    int count = 1;

    cin >> a >> b;

    for(int i = 0; i < b; i++){
        for(int j = i; j < b; j++){
            arr[j] = i;
        }
        count++;
    }
    return 0;
}