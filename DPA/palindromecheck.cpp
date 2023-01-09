#include <iostream> 
#include <cmath> 
#include <string> 
#include <vector>

/* ============== SOLUTION ==============

    1. Check, if number is less than 0 (done)
    2. Make a string from our number
    3. Check the equality 
    4. Print out the result


int main(){
    int number = 1441;
    int secondNumber = 152;

    if(number < 0){
        std::cout << "Your number is not a palindrome" << std::endl;
        return 0;
    }

    std::string stringNum = std::to_string(number);
    if(stringNum[0] == stringNum[3] && stringNum[1] == stringNum[2]){
        std::cout << "Your number is a palindrome" << std::endl;
        return 0;
    } else{
        std::cout << "Your number is not a palindrome" << std::endl;
        return 0;
    }
}

*/

/*  ============== SOLUTION WITH USER INPUT  ==============

    1. Take user input
    2. Check if number is less than 0
    3. Make a string from our number
    3. Check the equality 
    4. Return the result
*/

int main(){

    //Taking user input
    std::cout << "Welcome to palindrome program!" << std::endl;
    int number = 0;
    std::cout << "Enter your number: " << std::endl;
    std::cin >> number;
    if(number < 0){
        std::cout << "Your number is not a palindrome" << std::endl;
        return 0;
    }

    //Making a string and pushing it to vector
    std::vector<int> number2;
    std::string stringNum = std::to_string(number);
    for(int i = 0; i < stringNum.length(); ++i){
        number2.push_back(stringNum[i]);
    }
    
    //Iteration throught the vector and cheking the equality
    int vectorLen = number2.size() - 1;
    int j = 0;
    int k = 0;
    for(j; j < vectorLen; ++j){
        for(k = vectorLen; k >= j; --k){
            if(number2[j] != number2[k]){
                std::cout << "Your number is not a palindrome" << std::endl;
                return 0;
            }
        }
    }
    if(k == j){
        std::cout << "Your number is a palindrome" << std::endl;
        return 0;
    }

    return 0;
}
