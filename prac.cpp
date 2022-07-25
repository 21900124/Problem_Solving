#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int waterA, waterB, waterC; // A, B, C의 물통의 용량

vector<int> result; // c물의 양에 대한 결과를 저장할 벡터 
bool check[201][201][201]; // a, b, c를 모두 방문했는지 확인

struct current {
    int a, b, c; // 현재 a, b, c의 물의 양
};

void check_water(){
    queue <current> q;
    q.push( {0, 0, waterC} ); // 처음에는 c의 물의 양으로 초기화 

    while(!q.empty()){
        int a = q.front().a; // q의 맨 앞 a를 a의 물의 양으로 함
        int b = q.front().b; // q의 맨 앞 b를 b의 물의 양으로 함
        int c = q.front().c; // q의 맨 앞 c를 c의 물의 양으로 함
        q.pop(); // 사용할 값이므로 q에서 꺼냄

        if(check[a][b][c]) continue; // true이면 방문했다는 의미이므로 확인하지 않고 넘어감
        check[a][b][c] = true; // 방문하지 않았다면 true로 바꿔주고 확인시작
        if(a == 0) result.push_back(c); // 첫번째물통(a)이 비어있을때 c의 물의 양을 결과에 저장 

        // a만큼의 물을 물통 b에 넣었을 때 물통b가 넘치는지 확인하고 넘치면 b물통의 용량만큼만 담음
        if(a + b > waterB) q.push({a + b - waterB, waterB, c}); 
        // 넘치지 않으면 a물의 양을 b물통으로 다 옮김
        else q.push({0, a + b, c});

        // a만큼의 물을 물통 b에 넣었을 때 물통c가 넘치는지 확인하고 넘치면 c물통의 용량만큼만 담음
        if(a + b > waterC) q.push( {a + c - waterC, b, c} );
        // 넘치지 않으면 a물의 양을 c물통으로 다 옮김
        else q.push({0, b, a + c});

        // b만큼의 물을 물통 a에 넣었을 때 물통a가 넘치는지 확인하고 넘치면 a물통의 용량만큼만 담음
        if(b + a > waterA) q.push( {waterA, b + a - waterA, c} );
        // 넘치지 않으면 b물의 양을 a물통으로 다 옮김
        else q.push({b + a, 0, c});

        // b만큼의 물을 물통 c에 넣었을 때 물통c가 넘치는지 확인하고 넘치면 c물통의 용량만큼만 담음
        if(b + c > waterC) q.push({a, b + c -  waterC, waterC});
        // 넘치지 않으면 b물의 양을 c물통으로 다 옮김
        else q.push({a, 0, b + c});

        // c만큼의 물을 물통b에 넣었을 때 물통b가 넘치는지 확인하고 넘치면 b물통의 용량만큼만 담음
        if(c + b > waterB) q.push({a, waterB, c + b - waterB});
        else q.push({a, c + b, 0});
    }
}
int main(){

    cin >> waterA >> waterB >> waterC;

    check_water();

    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}