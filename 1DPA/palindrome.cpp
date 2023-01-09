//Задача на проверку, является ли число Палиндромом

#include <iostream> 
#include <string>

int main(){
    std::cout << "Welcome to is Palindrome!" << std::endl;
    std::cout << "Enter your 4-digit number: " << std::endl;
    int number = 0;
    std::cin >> number;
    std::string stringNumber = std::to_string(number);
    if(stringNumber[0] == stringNumber[3] && stringNumber[1] == stringNumber[2]){
        std::cout << "Your number is a Palindrome!";
        return 0;
    } else{
        std::cout << "Your number is not a Palindrome!";
        return 0;
    }
    return 0;
}