// 하샤드 수
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int num = x;
    int sum = 0;
    int remain = 0;
    
    while(x > 0){
        remain = x % 10;
        x /= 10;
        sum += remain;
    }
    if((num % sum) == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    return answer;
}