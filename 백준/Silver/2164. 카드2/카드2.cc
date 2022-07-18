#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
   int n;
   queue <int> q;
   
   cin >> n;

   for(int i = 1; i <= n; i++){
    q.push(i);
   }
   while(q.size() != 1){
        q.pop();
        if(q.size() == 1) break;

        q.push(q.front());
        q.pop();
        if(q.size() == 1) break;
    }
    cout << q.front() << endl;

    return 0;
}