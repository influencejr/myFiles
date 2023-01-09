#include <stdio.h>
#include <string.h>

struct structures
{
    int myInt;
    char myChar;
    char myString[30];
};


int main(){
    struct structures s1 = {12, 'a', "Hello World!"};
    struct structures s2;
    s2 = s1; //Copying s1 to s2;
    // s1.myInt = 42;
    // s1.myChar = 'A';
    printf("My integer is: %i\n", s1.myInt);
    printf("My letter is: %c\n", s1.myChar);
    s1.myInt = 30; //Modifying variable;
    printf("My integer is: %i\n", s1.myInt);
    // strcpy(s1.myString, "Hello World");
    printf("My string is: %s\n", s1.myString);
    return 0; 
}