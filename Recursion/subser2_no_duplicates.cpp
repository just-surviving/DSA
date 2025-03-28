#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    void findSubsets(int ind, vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans) {
        ans.push_back(ds); // Store the current subset

        for (int i = ind; i < nums.size(); i++) {
            if (i > ind && nums[i] == nums[i - 1]) continue; // Skip duplicates

            ds.push_back(nums[i]);
            findSubsets(i + 1, ds, nums, ans);
            ds.pop_back(); // Backtrack
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<vector<int>> ans;
        vector<int> ds;
        findSubsets(0, ds, nums, ans);
        return ans;
    }
};



// test function to test the code
int main() {
  Solution sol;
  vector<int> nums = {1, 2, 2};
  vector<vector<int>> result = sol.subsetsWithDup(nums);

  // Print the output
  for (auto subset : result) {
      cout << "{ ";
      for (int num : subset) {
          cout << num << " ";
      }
      cout << "}" << endl;
  }
  return 0;
}