#include <iostream>

using namespace std;

void window(int i, int j, int num){

    /* 
    n = 9일 때, 
    작은 창문 좌표 (1,1) (4,1) (7,1)
    큰 창문 좌표 (3,3) (4,3) (5,3) / (3,4) (4,4) (5,4) / (3,5) (4,5) (5,5)
    작은 창문 좌표 (1,7) (4,7) (7,7)
    */
    if((i / num) % 3 == 1 && (j / num) % 3 == 1){
        cout << " ";
    }
    else{
        if(num / 3 == 0){
            cout << "*";
        }
        else{
            window(i,j,num/3);
        }
    }
}

int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            window(i,j,n);
        }
        cout << "\n";
    }
    return 0;
}