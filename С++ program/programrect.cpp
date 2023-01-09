#include <iostream>

int main(){
    int height;
    int length;
    std::cout << "Enter height: " << std::endl;
    std::cin >> height;
    std::cout << "Etner length: " << std::endl;
    std::cin >> length;
    for(int i = 0; i < height; ++i){
        for(int j = 0; i < length; ++j){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "Printer rectangle;" << std::endl;
    return 0;
// int main(){
//     int height;
//     int length;
//     std::cout << "Enter height: " << std::endl;
//     std::cin >> height;
//     std::cout << "Etner length: " << std::endl;
//     std::cin >> length;
// 	for (int i = 0; i < height; ++i) {
// 		for (int j = 0; j < length; ++j) {
// 			std::cout << "&";
// 		}
// 		std::cout << std::endl;
// 	}
// 	std::cout << "Printed rectangle with hight:" << height << " and lenght:" << length << std::endl; //Rectangle with & shape;
//     return 0;
// }
}