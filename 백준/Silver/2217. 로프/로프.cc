#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, sum = 0;
    int max = 0;

    cin >> n;

    int weight[n];

    for(int i = 0; i < n; i++){
        cin >> weight[i];   
    }
    sort(weight,weight+n);

    int index = 0;
    for(int i = n; i > 0; i--){
        sum = weight[index] * i;

        
        if(sum > max){
            max = sum;
        }
        index++;
    }
    cout << max << endl;
    
    return 0;
}