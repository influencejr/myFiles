//Задача на вычисление дня недели

#include <iostream>

int main(){
    std::cout << "Enter number of the day of the week: " << std::endl;
    int dayOfWeek = 0;
    std::cin >> dayOfWeek;
    switch (dayOfWeek){
        case 1:
            std::cout << "It's Monday!";
            return 0;
        case 2:
            std::cout << "It's Tuesday!";
            return 0;
        case 3:
            std::cout << "It's Wednesday!";
            return 0;
        case 4: 
            std::cout << "It's Thursday!";
            return 0;
        case 5: 
            std::cout << "It's Friday!";
            return 0;
        case 6: 
            std::cout << "It's Saturday!";
            return 0;
        case 7:
            std::cout << "It's Sunday!";
            return 0;
        default:
            std::cout << "It's Monday!";
            return 0;
    }
    return 0;
}