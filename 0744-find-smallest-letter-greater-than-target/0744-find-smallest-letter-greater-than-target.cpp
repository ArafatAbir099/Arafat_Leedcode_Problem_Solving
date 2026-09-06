class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
      for(int i=0;i<letters.size();i++){
        if(letters[i] > target){
            return letters[i];
        }
      }
      return letters[0];
    }
};

/*START

Take letters and target

FOR each character in letters

    IF character > target

        RETURN character

END FOR

RETURN letters[0]

END 

*/