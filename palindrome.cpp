#include <iostream>
using namespace std;
#include <cctype>
#include <algorithm>

bool palindrome_verify(std::string n){
     std::cout << "palindrome verify\n";

     transform(n.begin(), n.end(),n.begin(), ::tolower);
     for( int i = 0, j = n.length() -1; i < j; i++, j--){

      if(n[i] != n[j]){
        cout << "it is a not polindrome\n";
          return false;
      }

     }
     cout << "it's a polindrome\n";
     return true;
      }

int main(){
  palindrome_verify("Ovo");
  return 0;
}
