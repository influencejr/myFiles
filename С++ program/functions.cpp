#include <iostream>
#include <vector>

void function(int x, int y){
    int z = x;
    x = y;
    y = z;
    std::cout << x << y << z << std::endl;
}

void function2(int &a, int &b){ //Короче, в параметр передаем reference, если нам нужно поменять значение во всем коде, передаем просто параметр если нам нужно поменять значение
//только в функции
    int q = a;
    a = b;
    b = q;
    std::cout << a << b << q << std::endl;
}

void arrayAsParameter(std::vector<int> array){
    for(int x = 0; x < array.size(); ++x) 
        std::cout << "Array iteration: " << array[x] << std::endl;
};

int main(){

    std::vector<int> array = {1,12,33,123,111};

    int firstNum = 10;
    int secondNum = 20;
    std::cout << "Before swap: " << std::endl;
    std::cout << firstNum << secondNum << std::endl;
    function(firstNum, secondNum);
    std::cout << "After swap: " << std::endl;
    std::cout << firstNum << secondNum << std::endl;
    firstNum = 10;
    secondNum = 20;
    std::cout << "Before swap: " << std::endl;
    std::cout << firstNum << secondNum << std::endl;
    function2(firstNum, secondNum);
    std::cout << "After swap: " << std::endl;
    std::cout << firstNum << secondNum << std::endl;

    arrayAsParameter(array);
}