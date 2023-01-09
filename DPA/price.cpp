//Задача на вычисление цены для обертки подарка
#include <iostream>
#include <cmath> 

int main(){
    //Taking input from user
    std::cout << "Vvedit' dovzhuny rebra (u sm): " << std::endl;
    float length = 0;
    std::cin >> length;
    std::cout << "Enter price of paper (u grn): " << std::endl;
    float price = 0;
    std::cin >> price;
    int rebra = 12;
    int sides = 6;

    float size = ((length * length) * 6) / 100;
    float totalprice = size * price;
    std::cout << "Total price is: " << totalprice << std::endl;
    return 0;
    
}