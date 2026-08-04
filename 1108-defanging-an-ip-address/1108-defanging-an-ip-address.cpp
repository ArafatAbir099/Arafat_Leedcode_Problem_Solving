class Solution {
public:
    string defangIPaddr(string address) {
        string s = "";
        for(auto x: address){
            if(x=='.'){
               s +="[.]";
            } 
            else{
               s +=x; 
            } 
        }
        return s;
    }
};