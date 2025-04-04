#include <bits/stdc++.h>
using namespace std;
bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
  if (ind == n)
  { //condition satisfied
    if (s == sum)
    {
      for (auto it : ds)
        cout << it << " ";
        cout << endl;
        return true;    // to stop further processing
    }
    // condition not satisfied
    return false; // to stop further processing
  }

  ds.push_back(arr[ind]);
  s += arr[ind];
  if(printS(ind + 1, ds, s, sum, arr, n) == true)
    return true; // if condition satisfied, return true

  // backtrack
  // remove the last element from the subset

  s -= arr[ind];
  ds.pop_back();

  // not pick
  if(printS(ind + 1, ds, s, sum, arr, n) == true)
    return true; // if condition satisfied, return true

    return false;
}

int main()
{
  int arr[] = {1, 2, 1};
  int n = 3;
  int sum = 2;
  vector<int> ds;
  printS(0, ds, 0, sum, arr, n);
  return 0;
}