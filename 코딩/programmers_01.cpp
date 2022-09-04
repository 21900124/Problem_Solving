#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer; // 답을 저장할 벡터
    map<string, string> info; // key: id, value: name
    vector<pair<string, string>>chat; // id, name을 한 쌍으로 벡터에 저장
    
    string state, id, name; 
    
    for(int i = 0; i < record.size(); i++){
        istringstream iss(record[i]); // istringstream : 공백을 기준으로 문자열을 parsing 함
        iss >> state >> id >> name; // 각각 상태, 아이디, 이름 변수에 넣음
        
        if(state != "Leave"){ // 만약 상태가 Leave라면
            info[id] = name; // id에 해당하는 key값에 name을 넣음
        }
        if(state != "Change"){ // 만약 상태가 Change라면
            chat.push_back({state, id}); // chat벡터에 state와 id를 한 쌍으로 저장함
        }
    }
        for(int i = 0; i < chat.size(); i++){
            
            // 만약 chat[i] 쌍의 첫번째(state)가 Enter라면 아이디 + 들어왔다고 출력
            if(chat[i].first == "Enter"){ 
                answer.push_back(info[chat[i].second] + "님이 들어왔습니다.");
            }
            else{
                // 아니라면 아이디 + 나갔다고 출력
                answer.push_back(info[chat[i].second] + "님이 나갔습니다.");
            }
        }
    
    return answer;
}
