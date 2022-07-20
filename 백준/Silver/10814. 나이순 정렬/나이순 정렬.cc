#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef struct People{
    int age;
    string name;
}People;

vector<People> v;

bool cmp(const People & a, const People & b){
    if(a.age < b.age) return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;

    cin >> n;
    
    struct People p[n];

    for(int i = 0; i < n; i++){
        cin >> p[i].age >> p[i].name;
        v.push_back(p[i]);
    }
    stable_sort(v.begin(),v.end(),cmp);

    for(int i = 0; i < n; i++){
        cout << v[i].age << " " << v[i].name << "\n";
    }
    return 0;
}