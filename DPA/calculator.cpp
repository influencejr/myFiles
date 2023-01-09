//This is calcucalor for DPA 

#include <iostream>
#include <cmath>

/*  
    (1) Creating operation function:
    1. Create sum function (done)
    2. Create subs function (done)
    3. Create mult function (done)
    4. Create division function (done)
    5. Create sqrt function (done)
    6. Create powtwo function (done)
    7. Create powthree function (done)

    (2) Taking input from user (done)
    
    (3) Catching error if happened (done)

    (4) Outputting the result (done)
*/

void sum(int x, int y){
    int result = x + y;
    std::cout << "Result is: " << result << std::endl;
}

void subs(int x, int y){
    int result = x - y;
    std::cout << "Result is: " << result << std::endl;
}

void mult(int x, int y){
    int result = x * y;
    std::cout << "Result is: " << result << std::endl;
}

void division(double x, double y){
    double result = x / y;
    std::cout << "Result is: " << result << std::endl;
}

void square(int x){
    double result = sqrt(x);
    std::cout << "Result is: " << result << std::endl;
}

void powtwo(int x){
    double result = pow(x, 2);
    std::cout << "Result is: " << result << std::endl;
}

void powthree(int x){
    double result = pow(x, 3);
    std::cout << "Result is: " << result << std::endl;
}

int main(){
    std::cout << "Welcome to calculator 3000!" << std::endl;
    double firstNum = 0;
    double secondNum = 0;
    std::string input = "";
    std::string ifError = "";
    std::string retry = "";
function: 
    std::cout << "Enter operation ((1 : +), (2 : -), (3: *), (4: /), (5: power of 2), (6: power of 3)): " << std::endl;
    std::cin >> input;
    if(input == "5" || input == "6"){ 
        std::cout << "Enter your number: " << std::endl; 
        std::cin >> firstNum;
    }
    else {
        std::cout << "Enter first number: " << std::endl;
        std::cin >> firstNum;
        std::cout << "Enter second number: " << std::endl;
        std::cin >> secondNum;
    }
    if(input == "1"){ sum(firstNum, secondNum); } 
    else if(input == "2"){ subs(firstNum, secondNum); } 
    else if(input == "3"){ mult(firstNum, secondNum); }
    else if(input == "4"){ division(firstNum, secondNum); }
    else if(input == "5"){ powtwo(firstNum); }
    else if(input == "6"){ powthree(firstNum); }
    else{ 
        std::cout << "Error: you entered wrong number!" << std::endl; 
        std::cout << "Do you want to restart the program?(Y or N)" << std::endl;
        std::cin >> ifError;
        if(ifError == "Y" || ifError == "Yes" || ifError == "YES" || ifError == "yes" || ifError == "y"){goto function;}
        else{ return 0; }
    }
    std::cout << "Do you want to restart the program? (Y or N)" << std::endl;
    std::cin >> retry;
    if(retry == "Y" || retry == "Yes" || retry == "YES" || retry == "yes" || retry == "y"){ goto function; }
    else{ return 0; }

    return 0;
}