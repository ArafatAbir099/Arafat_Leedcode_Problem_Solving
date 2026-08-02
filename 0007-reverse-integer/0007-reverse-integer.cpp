class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while( x != 0){
            int y = x % 10;
            x = x /10;
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
                return 0;
            }
         reverse = (reverse * 10) + y;
        }
        return reverse;
    }
};


/* স্যাম্পল ইনপুট: x = 123
ড্রাই রান ধাপসমূহ: ১. শুরুতে: rev = 0, x = 123 
২. প্রথম ধাপ:
pop = 123 % 10 = 3
x = 123 / 10 = 12
rev = 0 * 10 + 3 = 3 
৩. দ্বিতীয় ধাপ:
pop = 12 % 10 = 2
x = 12 / 10 = 1
rev = 3 * 10 + 2 = 32 
৪. তৃতীয় ধাপ:
pop = 1 % 10 = 1
x = 1 / 10 = 0
rev = 32 * 10 + 1 = 321 \
৫. শেষ: x এখন ০, তাই লুপ বন্ধ।
আউটপুট: 321
*/