#include <stdlib.h>
#include <stdio.h>

void start();

void showMenu();
int main(){
    

    start();

    
    return 0;
}



void start(){

    printf("                                                       BUS TICKET RESERVATION SYSTEM\n                                                       Made by SHREEYA, HEMANT, SUMAN\n                                                        IIIT BHUBANESHWAR\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("---------------------------------------------------------PRESS ANY KEY TO CONTINUE-------------------------------------------------------------\n");

    
    showMenu();
    //enter name and pass
    // char name[]={'s','u'};
    // char pass[]= {'s','2','f'};
    //welcome.....
    //to continue


}

void showMenu(){
    printf("WELCOME TO SHS BUS RESERVATION SYSTEM");
    printf("1.\tView all available bus\n2.\tBook tickets\n3.\tCancel tickets\n4.\tView book tickets\n5.\tExit");
}

