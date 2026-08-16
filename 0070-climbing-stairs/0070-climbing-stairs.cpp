class Solution {
public:
    int climbStairs(int n) {
        int way1=1;
        int way2=2;
        int current;
        if(n==1){
            return 1;
        }else if(n == 2){
            return 2;
        }
        for(int i = 3;i<=n;i++){
            current=way1+way2;\
        way1=way2;
        way2=current;
        }
        
        return way2;
    }  
   
};