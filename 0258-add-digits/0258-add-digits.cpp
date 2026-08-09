class Solution {
public:
    int addDigits(int num) {
        int result = num;
        
        while (result >= 10) {
            int sum = 0;
            while (result > 0) {
                sum += (result % 10);
                result = result / 10;
            }
            result = sum; 
        }
        
        return result;
    }
};
// last digit → num % 10
// remove last digit → num / 10