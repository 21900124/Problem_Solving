#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    
    string str;
    string subStr;
    vector<string> strTemp;
    int count = 0;

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        subStr = str.substr(i,str.length());
        strTemp.push_back(subStr);
        count++;
    }
    sort(strTemp.begin(),strTemp.end());

    vector<string>::iterator iter;
    for(iter = strTemp.begin(); iter != strTemp.end(); iter++){
        cout << *iter << endl;
    }
    return 0;
}