#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        int sum = 0;
        int alphabet[26] = {0};

        cin >> str;
        for(int j = 0; j < str.size(); j++){
            alphabet[str[j]-'A']++;
        }
        for(int j = 0; j < 26; j++){
            if(alphabet[j] == 0){
                sum += (int)('A'+j);
            }
        }
        cout << sum <<  endl;
    }
    return 0;
}