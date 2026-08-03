class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.length()-1;i++){//onk gula sonkha ase tai amader ke length dhorar lagbe
            score += abs(s[i]-s[i+1]);
        }
        return score;
    }
};