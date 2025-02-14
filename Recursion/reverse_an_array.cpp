#include<bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int j) {

  if(i >= j) return;
  swap(arr[i], arr[j]);
  f(++i, arr, --j); 
}

int main() {
  cout << "size of array" << endl;  
  int n;
  cin >> n;
  
  int m;
  cout << "number of elements after where it to be reversed" << endl;  
  cin >> m;
  
  int arr[n];
  cout << "enter elements" << endl;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  } 
  
  if(m < 0 || m >= n) {
    cout << "Invalid position for reversal!" << endl;
    return 1;
  }
  
  f(m + 1, arr, n - 1);
  
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}