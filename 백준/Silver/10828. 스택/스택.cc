#include <iostream>

using namespace std;

int myStack[] = {0};
int s_size = 0;

void s_push(int num){
    
    myStack[s_size] = num; // 스택의 top에 숫자넣기
    s_size++; // top인덱스 증가
}
int s_pop(){

    if(s_size == 0) return -1;
    
    int top = myStack[s_size - 1]; // top에 있는 데이터를 저장
    s_size--; // top인덱스를 하나 줄임
    return top; // top에 있는 데이터를 리턴
}
int size(){
    return s_size; // 사이즈를 출력, s_size는 top의 인덱스가 됨
}
int top(){
    if(s_size == 0) return -1; // top이 0이라면 -1을 리턴
    return myStack[s_size - 1]; // top인덱스에서 하나 작은 값을 출력(배열의 속성)
}
int empty(){
    if(s_size == 0) return 1;
    else return 0;
}

int main(){
    string kind;
    int save = 0;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> kind;

        if(kind == "push"){
            int num;
            cin >> num;
            s_push(num);
        }
        if(kind == "pop"){
            cout << s_pop() << '\n';
        }
        if(kind == "top"){
            cout << top() << "\n";
        }
        if(kind == "size"){
            cout << size() << "\n";
        }
        if(kind == "empty"){
            cout << empty() << "\n";
        }
    }
    return 0;
}