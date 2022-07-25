#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int visited[201][201][201] = {false}; // 해당 물통을 방문했는지 여부, 물통의 용량은 최대 200리터로 정해질 수 있음
vector <int> v; 

struct current{
    int a, b, c; // 현재 물의 양
};

int main(){

    queue <current> q;

    int Awater, Bwater, Cwater; // 물통의 용량
    int a, b, c; // 물의 양

    cin >> Awater >> Bwater >> Cwater; // 세 물통의 용량을

    q.push({0,0,Cwater}); // C물통의 양으로 초기화

    while(!q.empty()){
        
        a = q.front().a;
        b = q.front().b;
        c = q.front().c;
        q.pop();

        if(visited[a][b][c]) continue; // 방문했다면 다음걸로 넘어감
        
        visited[a][b][c] = true;

        if(a == 0) v.push_back(c);

        // 1. a에 있는 물을 b에 옮겼는데 넘칠 경우 = A물통에 물이 남음
        if(a + b > Bwater){
            q.push({a + b - Bwater, Bwater, c});
        }
        else{
            // B물통에 물을 다부어서 A물통에 물이 남아있지 않을 경우
            q.push({0, a + b, c});
        }
        // 2. a에 있는 물을 c에 옮겼는데 넘칠 경우 = A물통에 물이 남음
        if(a + b > Cwater){
            q.push({a + c - Awater, b, Cwater});
        }
        else{
            q.push({0, b, a + c});
        }
        // 3. b에 있는 물을 A에 옮겼는데 넘칠 경우 = B물통에 물이 남음
        if(b + a > Awater){
            q.push({Awater, a + b - Awater, c});
        }
        else{
            // A물통이 넘치지 않을 경우
            q.push({a + b, 0, c});
        }
        // 4. b에 있는 물을 C에 옮겼는데 넘칠 경우 = B물통에 물이 남음
        if(b + c > Cwater){
            q.push({a, b + c - Cwater, Cwater});
        }
        else{
            q.push({a, 0, b + c});
        }
        // 5. c에 있는 물을 b로 옮겼는데 넘칠 경우 = C물통에 물이 남음
        if(b + c > Bwater){
            q.push({a, Bwater, b + c - Bwater});
        }
        else{
            q.push({a, b + c, 0});
        }
    }
    
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}
