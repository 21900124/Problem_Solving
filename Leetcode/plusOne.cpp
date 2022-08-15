// plus one
class Solution {
    #include <vector>
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1;
        
        while(1){
            // 마지막 숫자가 9라면
            if(digits[size] == 9){
                // 마지막 숫자를 0으로 바꿈
                digits[size] = 0; 
                
                // 인덱스가 0이 될때까지 하나씩 뺌 = 뒤에서부터 앞으로 감
                if(size-1 >= 0){
                    --size;
                }
                else{
                    // 인덱스가 0보다 작아졌다면 처음 인덱스에 1을 넣고 종료
                    digits.insert(digits.begin(),1);
                    break;
                }
            }
            else{ // 마지막 숫자가 9가 아니라면
               
                ++digits[size]; // 단지 해당 인덱스에 1을 더하고 종료
                break;
            }
        }
        return digits; // 바뀐 digits를 리턴
    }
};