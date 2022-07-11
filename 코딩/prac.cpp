#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, change;
    int remain; 
    
    
    cin >> n;

    for(int i = 0; i < n; i++){
        int quarter = 0, dime = 0, nickel = 0, penny = 0;
        
        cin >> change;
        while(1){
            if(change >= 25){
                remain = change % 25; 
                quarter = change / 25;
                change = remain;
                continue;
            }
            if(change >= 10){
                remain = change % 10;
                dime = change / 10;
                change = remain;
                continue;
            }
            if(change >= 5){
                remain = change % 5;
                nickel = change / 5;
                change = remain;
                continue;
            }
            if(change >= 1){
                remain = change;
                penny = change;
                change = remain;
                break;
            }
            break;
        }
        
        cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
    }
    
    
    return 0;
}