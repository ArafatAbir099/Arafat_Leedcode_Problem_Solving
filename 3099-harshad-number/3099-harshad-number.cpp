class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp = x, sum = 0;
        
        // ডিজিটের যোগফল বের করা
        while (temp > 0) {
            sum += temp % 10;
            temp = temp / 10;
        }
        
        // x যদি sum দ্বারা নিঃশেষে বিভাজ্য হয়, তবে sum রিটার্ন করুন, না হয় -1
        if (x % sum == 0) {
            return sum;
        } else {
            return -1;
        }
    }
};

/*আমাদের একটি সংখ্যা x দেওয়া হবে।

প্রথমে সেই সংখ্যার সব digit-এর যোগফল বের করতে হবে।

তারপর দেখতে হবে

সংখ্যাটি কি তার digit-এর যোগফল দ্বারা নিঃশেষে বিভাজ্য?

যদি হয়

→ digit-এর যোগফল return করতে হবে।

না হলে

→ -1 return করতে হবে।
*/