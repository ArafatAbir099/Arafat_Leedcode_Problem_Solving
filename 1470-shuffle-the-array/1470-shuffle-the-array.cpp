class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans( 2 * n);  // result array

        for(int i=0;i<n;i++){
            ans[2 * i]=nums[i];   // even index এ x বসানো হচ্ছে
            //i = 0 → ans[0] = x1
          //    i = 1 → ans[2] = x2
            // i = 2 → ans[4] = x3
             ans[2 * i + 1]=nums[i + n];  // odd index এ y বসানো হচ্ছে
             /*i = 0 → ans[1] = y1
             i = 1 → ans[3] = y2
             i = 2 → ans[5] = y3
             */
        }
        return ans;
    }
};