// 오픈채팅방
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    
    map<string, string> users;
    
    vector<vector<string>> lists;
    
    for(int i = 0; i < record.size(); i++){
        stringstream ss(record[i]);
    
        vector<string> words;

        string word;

        while(getline(ss, word, ' ')){
            words.push_back(word);
        }

        if(words[1] == "Enter" || words[1] == "Change"){
            users[words[1]] = words[2]; 
        }
    }
    
    for(int i = 0; i < record.size(); i++){
        if(record[i][0] == "Enter"){
            answer.push_back(users[record[i][1]] + "님이 들어왔습니다.");
        }
        else if(record[i][0] == "Leave"){
            answer.push_back(users[record[i][1]] + "님이 나갔습니다.");
        }
    }
    return answer;
}