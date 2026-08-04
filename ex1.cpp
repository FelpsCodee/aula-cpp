#include <iostream> // std::cout
#include <string> // std::string

int main(){
    const std::string fizz = "fizz";
    const std::string buzz = "buzz";
    const std::string fizzbuzz = "fizzbuzz";

    for (int i = 1; i < 101; i++){
        if(i % 15 == 0){
            std::cout << i << "(" << fizzbuzz << ")\n";

        }else if(i % 5 == 0){
            std::cout << i << "(" << buzz << ")\n";

        }else if(i % 3 == 0 ){
            std::cout << i << "(" << fizz << ")\n";
            
        }else{
            std::cout << i << " is not divisible by 3 or 5\n";
        }
    }

    return 0;
}