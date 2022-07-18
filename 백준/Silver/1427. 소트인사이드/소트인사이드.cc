#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int input;
    string num;

    cin >> input;
    num = to_string(input);

    sort(num.begin(), num.end());
    reverse(num.begin(),num.end());
    
    cout << num <<  endl;

    return 0;
}