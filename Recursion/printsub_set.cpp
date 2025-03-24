#include <bits/stdc++.h>
using namespace std;
void printF(int ind, vector<int> &ds, int arr[], int n)
{
  if (ind == n)
  {
    for (auto it : ds)
    {
      cout << it << " ";
    }
    if (ds.size() == 0)
    {
      cout << "{}";
    }
    cout << endl;
    return;
  }
  // not pick, or not take condition, this element is not added to your subsequence

  printF(ind + 1, ds, arr, n);

  // take or pick the particular index into the subsequence

  ds.push_back(arr[ind]);
  printF(ind + 1, ds, arr, n);
  ds.pop_back();
}

int main()
{
  int arr[] = {3, 1, 2};
  int n = 3;
  vector<int> ds;
  printF(0, ds, arr, n);
  return 0;
}
// Time Complexity: O(2^n)  Space Complexity: O(n)
// Output:
//{} {3} {2} {2 3} {1} {1 3} {1 2} {1 2 3}



// leetcode solution

// class Solution {
// private:
//     void printF(int ind, vector<int> &ds, vector<int> &arr, int n, vector<vector<int>> &ans) {
//         if (ind == n) {
//             ans.push_back(ds); // Store the subset
//             return;
//         }

//         // Not pick the element
//         printF(ind + 1, ds, arr, n, ans);

//         // Pick the element
//         ds.push_back(arr[ind]);
//         printF(ind + 1, ds, arr, n, ans);
//         ds.pop_back();  // Backtrack
//     }

// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ds;
//         vector<vector<int>> ans; // Store subsets
//         printF(0, ds, nums, n, ans);
//         return ans;
//     }
// };
// // Time Complexity: O(2^n)  Space Complexity: O(n)