//Skoree vsego ya v dushe ne budu ebat' 4e sdes' budet proishodit' 
#include <iostream>

// using namespace std; std:: будет работать даже если эта тема присутствует

class MyClass{
    public:
        int myNum;
        std::string myString;
        std::string model;
        std::string brand;
        int year;
        // MyClass(std::string a, std::string b, int c);
        void function(){
            std::cout << "Hello World called from MyClass;" << std::endl;
        }
        void function2();
        // MyClass(std::string x, std::string y, int z){
        //     year = z;
        //     model = y;
        //     brand = x;
        // }
        void setSalary(int s){
            salary = s;
        };

        void getSalary(){
            std::cout << salary << std::endl;
        };
    private:
        int salary = 0;
};

class Vehicle{
    public:
        std::string brand = "Ford";
        int year = 2000;
};

class Car : public Vehicle{ //Наследствие
    public:
        std::string model = "Mustang";
};

class CarCar : public Car{}; //Наследствие от наследственного класса

// ==============================

class Parent1{
    public:
        std::string str1 = "Hello World from Parent1";
};

class Parent2{
    public:
        std::string str2 = "Hello World from Parent2";
};

class Child1 : public Parent1, public Parent2{}; //Несколько наследствий в одном классе

// ==============================

class Zalupa{ //Protected - тот же самый private, только мы можем получать доступ к данным в наследственных классах
    protected:
        int salary;
};

class Zalupa2 : public Zalupa{
    public:
        void getSalary(){
            std::cout << salary << std::endl;
        };
        void setSalary(int s){
            salary = s;
        };
};

// MyClass::MyClass(std::string a, std::string b, int c){
//     brand = a;
//     model = b;
//     year = c;
// }

// void MyClass::function2(){
//     std::cout << "Hello World from function2 defined outside of the class" << std::endl;
//}

int main(){

    Zalupa2 myZalupa;
    myZalupa.setSalary(69420);
    myZalupa.getSalary();

    Child1 myChild;
    std::cout << myChild.str1 << " 0 " << myChild.str2 << " 0 " << std::endl;

    CarCar myCarCar;
    std::cout << myCarCar.brand << " 1 " << myCarCar.model << " 2 " << myCarCar.year << std::endl;

    Car myCar;
    std::cout << myCar.brand << " 1 " << myCar.model << " 2 " << myCar.year << std::endl; 

    // MyClass classObj1("BMW", "X5", 1999);
    // std::cout << classObj1.brand << " " << classObj1.model << " " << classObj1.year << std::endl;
    // MyClass myObj;
    // myObj.getSalary();
    // myObj.setSalary(69420);
    // myObj.getSalary();

    // MyClass myObj;
    // myObj.myNum = 42;
    // myObj.myString = "String myString declared in MyClass";
    // myObj.function();
    // myObj.function2();
    // std::cout << myObj.myNum << std::endl;
    // std::cout << myObj.myString << std::endl;
}