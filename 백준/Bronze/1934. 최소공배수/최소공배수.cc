#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, min, gcf;
    int a;
    int b;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;

        if(a < b){
            min = a;
        }
        else{
            min = b;
        }
        int count = 0, remainA = 0, remainB = 0;

        for(int j = 1; j <= min; j++){
            remainA = a % j;
            remainB = b % j;

            if(remainA == 0 && remainB == 0){
                gcf = j;
            }
        }
        int num1, num2;

        num1 = a / gcf;
        num2 = b / gcf;

        cout << gcf * num1 * num2 << endl;
    }


    return 0;
}
