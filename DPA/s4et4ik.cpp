//Задача для вычисления показателей счетчика
#include <iostream> 

int main(){
    std::cout << "Enter po4atkovi pokaznyky: " << std::endl;
    float po4atkovi = 0;
    std::cin >> po4atkovi;
    std::cout << "Enter kincevi pokaznyky: " << std::endl;
    float kincevi = 0;
    std::cin >> kincevi;
    float spozhyto = kincevi - po4atkovi;
    std::cout << "Spozhyto: " << spozhyto << std::endl;
    float pozaNorm = spozhyto - 100;
    std::cout << "poza norm: " << pozaNorm << std::endl; 
    float zaNorm = spozhyto - pozaNorm;
    std::cout << "za norm: " << zaNorm << std::endl;
    float result = (zaNorm * 0.9) + (pozaNorm * 1.68);
    std::cout << "Do splatu: " << result << std::endl;
    return 0;
}