#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int waterA, waterB, waterC;

vector<int> result;
bool check[201][201][201];

struct current {
    int a, b, c;
};

void check_water(){
    queue <current> q;
    q.push( {0, 0, waterC} ); 

    while(!q.empty()){
        int a = q.front().a;
        int b = q.front().b;
        int c = q.front().c;
        q.pop();

        if(check[a][b][c]) continue; // a, b, c를 모두 방문해보고 a = 0 일때만 결과 벡터에 넣음
        check[a][b][c] = true; 
        if(a == 0) result.push_back(c);

        if(a + b > waterB) q.push({a + b - waterB, waterB, c});
        else q.push({0, a + b, c});

        if(a + b > waterC) q.push( {a + c - waterC, b, c} );
        else q.push({0, b, a + c});

        if(b + a > waterA) q.push( {waterA, b + a - waterA, c} );
        else q.push({b + a, 0, c});

        if(b + c > waterC) q.push({a, b + c -  waterC, waterC});
        else q.push({a, 0, b + c});

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