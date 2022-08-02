#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string str;
    string caesar = "";

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C'){
            caesar += str[i] + 23; // ABC일때는 23만큼을 더해야 XYZ가 출력됨
        }
        else{
            caesar += str[i] - 3;
        }
    }
    cout << caesar << endl;
    return 0;
}