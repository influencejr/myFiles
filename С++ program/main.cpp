#include <iostream>

int incr(int x, int y){
    return x + y;
}

int decr(int x, int y){
    return x - y;
} 

int main(){
    std::string input = "";
    int firstNumber;
    int secondNumber;
    std::cout << "Enter first number: " << std::endl;
    std::cin >> firstNumber;
    std::cout << "Enter second number: " << std::endl;
    std::cin >> secondNumber;
    std::cout << "Enter operation (+, -): " << std::endl;
    std::cin >> input;
       if(input == '-'){std::cout << decr(firstNumber, secondNumber) << std::endl; };
       else if()
}