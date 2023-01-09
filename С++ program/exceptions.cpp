#include <iostream>
#include <fstream>
#include <string>

int main(){
    try{
        int age = 20;
        if(age >= 18) std::cout << "Access granted";
        else throw (age);
    }
    catch(int myNum){
        std::cout << "Access denied, you must be at least 18 years old! " << std::endl;
        std::cout << "Age is:" << myNum;
    }
};