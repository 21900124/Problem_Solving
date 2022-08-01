#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int answer = 0;

    cin >> n;

    int days[n];

    for(int i = 0; i < n; i++){
        cin >> days[i];
    }
    
    sort(days,days + n);
    reverse(days,days+n);

    int max = days[0];

    for(int i = 0; i < n; i++){
        if(max < days[i] + i){
            max = days[i] +i;
        }
    }
    max += 2;
    cout << max << endl;

    return 0;
}
