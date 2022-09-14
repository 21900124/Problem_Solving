#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

bool solution(string input)
{
    bool answer = true;
    int y_num = 0;
    int p_num = 0;
    
    for(int i = 0; i < input.length(); i++){
        input[i] = tolower(input[i]);
    }

    for(int i = 0; i < input.length(); i++){
        if(input[i] == 'y'){
            y_num++;
        }
        if(input[i] == 'p'){
            p_num++;
        }
    }
    if(p_num == y_num){
        answer = true;
    }
    else{
        answer = false;
    }

    return answer;
}
int main(){
    string input;
    bool result;

    cin >> input;
    result = solution(input);
    if(result == 1){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }

    return 0;
}