#include<bits/stdc++.h>
using namespace std;
#include<stdlib.h>
void print(int i, int n);
int main(){
   int n;
   cin >> n;
   print(1,n);
   return 0;
}

void print(int i, int n){
   if(n==0 || i>n){
    return;
   }
   cout << "Abhinav"  << endl;
   print(i+1, n);
}
