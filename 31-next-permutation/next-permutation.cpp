
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int idx = -1;

        // Step 1: Find the breakpoint
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // Step 2: If breakpoint exists
        if(idx != -1) {
            
            // Find the next greater element
            for(int i = n - 1; i > idx; i--) {
                if(nums[i] > nums[idx]) {
                    swap(nums[i], nums[idx]);
                    break;
                }
            }
        }

        // Step 3: Reverse the remaining elements
        reverse(nums.begin() + idx + 1, nums.end());
    }
};
