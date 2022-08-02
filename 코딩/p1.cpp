#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, count = 0; 
    string str;
    int checkNum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;

        int alphabet[26] = {0};
        count = 0;
        
        for(int j = 0; j < str.size(); j++){
            // 그룹단어가 아닌 조건
            if(str[j-1] != str[j] && alphabet[str[j]-'a'] == 1){
                count++;
            }
            alphabet[str[j]-'a'] = 1;
        }
        if(count == 0){
            checkNum++;
        }
    }
    cout << checkNum << endl;
    
    return 0;
}