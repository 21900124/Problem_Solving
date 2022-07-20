#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    
    int score[8];
    int sortScore[8];
    int sum = 0;
    int index[5];
    
    for(int i = 0; i < 8; i++){
        cin >> score[i];
        sortScore[i] = score[i];
    }
    sort(sortScore,sortScore+8);
    reverse(sortScore,sortScore+8);
    int count = 0;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 5; j++){
            if(score[i] == sortScore[j]){
                sum += score[i];
                index[count] = i+1;
                count++;
            }
        }
    }
    cout << sum << endl;
    for(int i = 0; i < 5; i++){
        cout << index[i] << " ";
    }   
    cout << endl;
    return 0;
}