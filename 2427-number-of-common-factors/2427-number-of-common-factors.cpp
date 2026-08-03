class Solution {
public:
    int commonFactors(int a, int b) {
        int n = min(a,b);//sob thake choto sonkha ta ber korbe a,b er moddhe...er moddhe choto sonkha ta holo 6..tahole loop chole 6 porjonto
        int count = 0;
        for(int i =1;i<=n;i++){//i<== dewar karon holo choto sonkha  taw cheek hbe = nh dile choto sonkha ta cheek hbe nh
           if(a%i==0 && b%i==0){ // % modulo use korsi karon jei tar vagses 0 asbe oi tai to ami count korbo onno gula count korbo nh ami ,,,vagses 0 holei oi ta count korbo
            count++;
           }
        }return count;
    }
};