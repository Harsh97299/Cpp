 #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
      string n;
      cout << "Enter the string." << endl;
      getline(cin,n);
      int len = n.length();
      for(int i = 0; i < len/2; i++){
            if(n[i] != n[ len - i -1]){
                  cout << "String is not a pallindrome\n";
                  exit(1);
            }
      }
      cout << "String is a pallindrome\n";
      return 0;
}
