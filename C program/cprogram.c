#include <stdio.h>
#include <stdbool.h> //Чтобы можно было работать с bool
 #include <string.h> //Чтобы использовать методы с строками типа strlen()

//Все типы данных в С: int(%d или %i), float(%f), char(%c или %s если мы сделали строку), double(%lf, я так понял типа long float), bool(%d)

int main() {

    int mynum;
    printf("Enter your number:");
    scanf("%i", &mynum);
    printf("its your number: %i\n", mynum);

    int array[5] = {1,12,33,42,123};
    for(int l = 0; l < 5; ++l)
        printf("abc: %i\n", array[l]);

    char fullName[30];
    printf("Enter your full name:");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s\n", fullName);

    int varint = 42;
    float varfloat = 42.42;
    double vardouble = 42.42;
    printf("Size of int: %lu\n", sizeof(varint)); //Чтобы узнать размер переменной, в скобках указываем %lu к любой переменной, потом sizeof(), 
    //и в параметр передаем имя переменной
    printf("Size of float: %lu\n", sizeof(varfloat));
    printf("Size of double: %lu\n", sizeof(vardouble));

    char helloWorld[] = "Hello World"; //Таким образом мы указываем строки
    printf("My string: %s\n", helloWorld);

    int x = 3;
    int y = 3;
    int z = 4;
    int i = 0;
    int j = 0;
    while(i < 10){
        printf("Its i: %i\n", i);
        ++i;
    }

    do{
        printf("Its j2: %i\n", j);
        ++j;
    }
    while(j < 5);
    printf("XOR of 3 and 3: %i\n", 3 ^ 3);
    printf("XOR of 3 and 4: %i\n", 3 ^ 4);

    switch(x){
        case 1:
            printf("1\n");
            break;
        case 3:
            printf("3\n");
            break;

    }

    for(int k = 0; k < 10; ++k)
        printf("Its k3: %i\n", k);

    bool isTrue = false;
    printf("is True: %d\n", isTrue);
    if(isTrue) { printf("Its true!\n"); }
    else { printf("Its false!\n"); };
    (isTrue) ? printf("Its true!\n") : printf("Its false!\n"); //Тернарный оператор

    int myInt = 42;
    printf("%d\n", myInt); //Чтобы вывести переменную типа int, нужно перед названием переменной указывать либо "%d", либо "%i"
    printf("My favorite number is %d", myInt);
    float myFloat = 42.42;
    printf("%f\n", myFloat); //Чтобы вывести переменную типа float, нужно перед названием переменной указывать "%f"
    char myChar = 'd';
    printf("%c\n", myChar); //Чтобы вывести переменную типа char, нужно перед названием переменной указывать "%c"
    printf("My number is %d and my favorite character is %c\n", myInt, myChar);
    printf("Hello World!\nRight now I'm learning C\n");
    return 0;
} 

/*Data Type Conversion
int a = 5;
int b = 2;
int c = a / b; В этом случае результат будет 2, потому что у нас типы данных int. Чтобы у нас был точный результат, нам нужно указать переменную результата типа float или double.
Но если компоненты тоже типа int, то тогда нам самим нужно перевести результат в тип float:
float c = (float) a / b; Тогда результат будет 2.5
*/

//Также мы можем обьявлять константы: const int myInt = 10. Когда обьявляем константу, будет лучше если написать ее имя в верхнем регистре: const int MYINT = 5;
