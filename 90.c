#include<stdio.h>
//declaratinon/prototype
void printHello();

int main(){

    printHello();//function call
    printHello();
    printHello();

    return 0;
}

//function definition
void printHello(){
    printf("Hello!\n");
    printf("My name is Anon\n");
}