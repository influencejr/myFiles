#include <iostream>
#include <fstream>
#include <string>

//ofstream - Создает и записывает файл
//ifstream - Читает файл
//fstream - комбинация ofstream и ifstream

int main(){
    std::ofstream MyFile("filename.txt"); //Создает и открывает файл
    MyFile << "Hello World from C++ xD"; //Записываем строку в файл
    MyFile.close();

    //Далее шаги по читанию файла:

    std::string myText; //Создаем новую строку в которую мы будем записывать значение
    std::ifstream MyReadFile("filename.txt");
    while(std::getline(MyReadFile, myText)){
        std::cout << myText;
    }
    MyFile.close();
};