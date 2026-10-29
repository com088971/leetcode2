
class Solution {
public:
    void solve(vector<int>& nums, int index, vector<int>& temp,
               vector<vector<int>>& ans) {

        // Store the current subset
        ans.push_back(temp);

        // Explore all remaining elements
        for (int i = index; i < nums.size(); i++) {
            temp.push_back(nums[i]);  // Take the element

            solve(nums, i + 1, temp, ans);  // Recursive call

            temp.pop_back();  // Backtrack
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(nums, 0, temp, ans);

        return ans;
    }
};
