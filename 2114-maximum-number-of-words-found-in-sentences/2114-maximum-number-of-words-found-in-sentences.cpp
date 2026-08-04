class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int maxcount=0, currentcount=0; //maxcount → এখন পর্যন্ত সবচেয়ে বেশি যে word count পাওয়া গেছে, সেটা মনে রাখার জন্য।
       //currentcount → space গোনার জন্য (temporary counter)।
       for(int i=0;i<sentences.size();i++){
        for(int j=0;j<sentences[i].size();j++){
            if( sentences[i][j]==' '){
                currentcount++;
            }
            if(currentcount > maxcount){
                maxcount = currentcount;
            }
        }
        currentcount=0;
       }
        return  maxcount + 1; 
    }
};

/*
FUNCTION mostWordsFound(sentences):

    // ধাপ ১: একটা variable বানাও যেখানে "এখন পর্যন্ত সর্বোচ্চ word count" জমা থাকবে
    // শুরুতে ০ রাখছি, কারণ এখনো কিছুই দেখা হয়নি
    SET maxcount = 0

    // ধাপ ২: প্রতিটা sentence-এর জন্য একে একে ঘুরব
    // "sentences" এর মধ্যে যতগুলো sentence আছে, ততবার এই loop চলবে
    FOR EACH sentence IN sentences:

        // ধাপ ৩: এই sentence-টার জন্য নতুন করে একটা space-counter বানাও
        // *** গুরুত্বপূর্ণ: এটা প্রতিটা sentence-এর শুরুতে আবার ০ হচ্ছে ***
        // কারণ প্রতিটা sentence-এর হিসাব একদম আলাদা হতে হবে,
        // আগের sentence-এর সাথে মিশে গেলে চলবে না
        SET currentcount = 0

        // ধাপ ৪: এই sentence-এর ভেতরের প্রতিটা character দেখব
        FOR EACH character IN sentence:

            // ধাপ ৫: যদি এই character একটা space হয়...
            IF character == ' ':
                // ...তাহলে counter-এ ১ যোগ করো
                // কারণ প্রতিটা space মানে দুইটা word-এর মাঝের বিভাজন রেখা
                currentcount = currentcount + 1
            END IF

        END FOR   
        // ⬆️ লক্ষ্য করো: এখানে inner for loop শেষ হয়ে গেছে
        // মানে এই sentence-এর সব character দেখা শেষ

        // ধাপ ৬: এখন এই sentence-এর word count বের করো
        // formula: word count = space count + 1
        // (কেন +1? কারণ n টা space থাকলে, তার মানে n+1 টা word থাকে)
        SET wordCount = currentcount + 1

        // ধাপ ৭: এই sentence-এর word count কি এখন পর্যন্ত-এর 
        // সবচেয়ে বড় সংখ্যার (maxcount) চেয়ে বড়?
        IF wordCount > maxcount:
            // যদি বড় হয়, তাহলে maxcount কে আপডেট করে দাও
            maxcount = wordCount
        END IF

    END FOR   
    // ⬆️ লক্ষ্য করো: এখানে outer for loop শেষ হয়ে গেছে
    // মানে সবগুলো sentence দেখা শেষ

    // ধাপ ৮: সব sentence দেখা শেষ হওয়ার পর, 
    // maxcount-এ যা আছে সেটাই ফাইনাল উত্তর — এখন return করো
    RETURN maxcount

END FUNCTION
*/