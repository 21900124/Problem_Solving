#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int lineNum, brandNum;

    cin >> lineNum >> brandNum;

    int package[brandNum]; // 6개 묶음가격
    int piece[brandNum]; // 낱개 가격
    int totalPrice = 0;

    for(int i = 0; i < brandNum; i++){
        cin >> package[i] >> piece[i];
    }
    int minPack = 1001;
    int minPiece = 1001;
    for(int i = 0; i < brandNum; i++){
        if(minPack > package[i]){
            minPack = package[i];
        }
        if(minPiece > piece[i]){
            minPiece = piece[i];
        }
    }

    int quotient = 0;
    int remain = 0;

    quotient = lineNum / 6;
    remain = lineNum % 6;

    if(remain * minPiece >= minPack){
        totalPrice = minPack * quotient + minPack;
    }
    else if(minPiece * 6 < minPack){
        totalPrice = minPiece * lineNum;
    }
    else{
        totalPrice = minPack * quotient + remain * minPiece;
    }

    cout << totalPrice << endl;

    return 0;
}