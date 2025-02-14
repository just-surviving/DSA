#include<bits/stdc++.h>
using namespace std;
bool f(int i, string &s) {
    if(i>= s.size()/2) return true;
    if(s[i]!=s[s.size()-1-i]) return false;
    return f(++i, s);
} 
int main(){
  string s;
  cout << "Enter a string" << endl; 
  cin >> s;
  cout << f(0,s);
  return 0;
}