class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long duplicate=x;
        long reverse=0;
        long temp=x;
        while(temp > 0){
            int lastdigit=temp%10;
            reverse=(reverse * 10)+lastdigit;
            temp=temp/10;
        }
        if (duplicate == reverse){
            return true;
        } else {
            return false;
        }
    }
};