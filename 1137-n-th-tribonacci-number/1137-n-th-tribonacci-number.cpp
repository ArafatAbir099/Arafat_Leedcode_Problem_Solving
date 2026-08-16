class Solution {
public:
    int tribonacci(int n) {
        int next,a=0,b=1,c=1;
        if(n==0){
            return 0;
        }else if(n==1 || n== 2){
            return 1;
        }
        for(int i =3;i<=n;i++){
            next=a+b+c;
            a=b;
            b=c;
            c=next;
        }
        return c;

    }
};

/*
FUNCTION tribonacci(n):

    IF n == 0:
        RETURN 0
    IF n == 1 OR n == 2:
        RETURN 1

    // প্রথম তিনটা মান সেট করি
    a = 0    // এটা T0 represent করছে
    b = 1    // এটা T1 represent করছে
    c = 1    // এটা T2 represent করছে

    // n=2 পর্যন্ত তো আমরা হাতে বসিয়ে দিয়েছি,
    // এখন n=3 থেকে n পর্যন্ত loop চালাব
    FOR i FROM 3 TO n:
        next = a + b + c    // পরের সংখ্যা = আগের তিনটার যোগফল

        // এখন window টা শিফট করতে হবে
        a = b
        b = c
        c = next

    RETURN c    // loop শেষে c-ই হলো Tn


*/ 