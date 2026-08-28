class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int count[26] = {0};

        // magazine-এর letter গুনছি
        for(int i = 0; i < magazine.length(); i++) {
            int index = magazine[i] - 'a';
            count[index]++;
        }

        // ransomNote-এর letter দরকার
        for(int i = 0; i < ransomNote.length(); i++) {

            int index = ransomNote[i] - 'a';

            if(count[index] == 0) {
                return false;
            }

            count[index]--;
        }

        return true;
    }
};