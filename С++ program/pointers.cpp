#include <iostream>
#include <cmath> 

void function(){
    std::cout << "Hello World" << std::endl;
}

int main(){
    std::string myString = "Hello World";
    std::string  &myStringRef = myString;
    std::string * pstr = &myString;
    std::cout <<"My string: " << myString << std::endl;
    std::cout <<"My string reference: " << myStringRef << std::endl;
    std::cout <<"My string pointer: "<< pstr << std::endl;
    std::cout <<"My string dereferenced: "<< *pstr << std::endl;
    std::cout << "My function reference: " << &function << std::endl;
    *pstr = "watahel)";
    std::cout << "My string pointer changed value: " << *pstr << std::endl;
    std::cout << "My string changed value: " << myString << std::endl; 
}