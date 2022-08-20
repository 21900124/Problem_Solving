#include <iostream>
using namespace std;

int main(){

    int asc[8] = {1,2,3,4,5,6,7,8};
    int des[8] = {8,7,6,5,4,3,2,1};
    int input[8]; 
    int i, j;
    
    int ascCount = 0, desCount = 0, mixCount = 0;

    for(i = 0; i < 8; i++){
        cin >> input[i];
    }

    for(i = 0; i < 8; i++){
        if(asc[i] == input[i]){
            ascCount++;
        }
    }
    for(i = 0; i < 8; i++){
        if(des[i] == input[i]){
            desCount++;
        }
    }
    if(ascCount == 8){
        cout << "ascending" << endl;
    }
    else if(desCount == 8){
        cout << "descending" << endl;
    }
    else{
        cout << "mixed" << endl;
    }
    
    return 0;
}