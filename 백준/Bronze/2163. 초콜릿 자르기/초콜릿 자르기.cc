#include <iostream>

using namespace std;

int main(){
    int width, height;
    int answer = 0;

    cin >> width >> height;

    answer = (width - 1) + (height - 1) * width;

    cout << answer << "\n";

    return 0;
}