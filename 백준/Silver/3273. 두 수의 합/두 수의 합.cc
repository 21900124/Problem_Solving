#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int>num;

    int n, input, target, sum = 0, count = 0;

    cin >> n;

    for(int i = 0; i < n; i++){ 
        cin >> input;
        num.push_back(input);
    }
    cin >> target;

    sort(num.begin(), num.end());

    int start = 0, end = n-1;
    while(start < end){
        int sum = num[start] + num[end];
        if(sum == target){
            count++;
            start++;
            end--;
        }
        else if(sum > target){
            end--;
        }
        else{
            start++;
        } 
    }
    cout << count << "\n";

	return 0;
}