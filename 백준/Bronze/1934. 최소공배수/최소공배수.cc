#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, min, gcf;
    int a;
    int b;

    cin >> n; // 최소공배수 쌍들의 수
    
    for(int i = 0; i < n; i++){
        cin >> a >> b; // 두 수를 입력받음

        if(a < b){ // 최대공약수는 두 수의 min값을 넘지 않으므로 두 수 중에서 min값을 구함 
            min = a;
        }
        else{
            min = b;
        }
        int count = 0, remainA = 0, remainB = 0; // 나머지를 저장할 변수
        
        // min값까지 반복
        for(int j = 1; j <= min; j++){
            remainA = a % j; 
            remainB = b % j;
            
            // 둘 다 나누어떨어지는 j를 최대공약수로 저장함
            if(remainA == 0 && remainB == 0){ 
                gcf = j; // 마지막에는 가장 큰 j가 최종 최대공약수가 됨
            }
        }
        int num1, num2;
        
        // 두 수를 최대공약수로 나눔
        num1 = a / gcf; 
        num2 = b / gcf;
        
        // 두 수와 최대공약수를 곱해서 최소공배수를 구함
        cout << gcf * num1 * num2 << endl;
    }


    return 0;
}
