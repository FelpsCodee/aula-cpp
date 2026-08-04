#include <iostream> //std::cout
#include <string> // std::string

int main(){
  int year = 2026;
  int age = 19;
  auto grade = 5.0;
  std ::string name = "Felipe";
  std::cout <<"Hello, my name is " << name << " and i born in " << year - age << ".\n";
  
  if (year > 2025) {

    std::cout << "I will be 20 years old in " << year << ".\n";
    }
  else {

    std::cout << "I will be 19 years old in " << year << ".\n";
  }

  if ( grade < 5.75){
    
    std::cout << "I failed the course with a grade of " << grade << ".\n";

  }else if( grade >= 5.75 && grade < 7.0){

    std::cout << "I passed the course with a grade of " << grade << ".\n";

  }else{

    std::cout << "I got an excellent grade of " << grade << ".\n";

  }

  return 0;
  
}
