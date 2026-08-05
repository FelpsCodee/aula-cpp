#include <iostream>
using namespace std;

void fibonacci(int n){
  int a = 0;
  int b = 1;
  int c;

  cout << "Fibonacci series: ";

  for (int i = 1; i <=n; i++){
    cout << a;

    if (i <n){
      cout << ", ";
    }

    c = a + b;
    a = b;
    b = c;

  }
}

int main(){
  fibonacci(30);

  return 0;
}