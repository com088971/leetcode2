class Solution {
public:
    int mySqrt(int x) {
        int ans = -1;
        int start = 0, end = x;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(mid == 0 || mid <= x / mid) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};