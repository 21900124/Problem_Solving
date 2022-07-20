#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(pair<int, string> a, pair<int,string> b){
    if(a.first < b.first) return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    
    vector<pair<int, string> > people(n);

    for(int i = 0; i < n; i++){
        cin >> people[i].first >> people[i].second;
    }
    stable_sort(people.begin(),people.end(),cmp);

    for(int i = 0; i < n; i++){
        cout << people[i].first << " " << people[i].second << "\n";
    }
    return 0;
}