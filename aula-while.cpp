#include <iostream> // std::cout
#include <string> // std::string
#include <cmath> // std::sqrt



int main(){

    std::string name;

    while (1) {
        std::cout << "Enter your name: ";
        std:getline(std::cin, name);

        if(name.empty()){
          std::cout << "Name cannot be empty. Please try again." << std::endl;
          continue;
        }
        if(name == "clara"){
          std::cout << "Hello clara, welcome!" << std::endl;
          break;
        }else if( name == "exit"){
          std::cout << "Exiting the program..." << std::endl;
          break;
        }else{
          std::cout << "Hello " << name << ", you are not clara." << std::endl;
        }
    }


  return 0;
}