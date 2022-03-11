#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void start();

void showMenu();

bool Valid();

int main(){
    

    start();

    
    return 0;
}


bool Valid();
void start(){

    printf("                                                       BUS TICKET RESERVATION SYSTEM\n                                                       Made by SHREEYA, HEMANT, SUMAN\n                                                        IIIT BHUBANESHWAR\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("---------------------------------------------------------PRESS ANY KEY TO CONTINUE-------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    

    bool UserNameValid = Valid();

    showMenu();
    


}


bool Valid(){

    char pass[30];
    char name[30];
    printf("-----------------------------------------------LOGIN--------------------------------------------------------\n");
    printf("                    ENTER USERNAME :- ");
    gets(name);
    printf("\n");
    printf("                    ENTER PASSWORD :- ");
    gets(pass);
    printf("\n");
    printf("----------------------------------------LOGIN IS SUCCESSFUL-------------------------------------------------\n");
    printf("==============================WELCOME TO SHS BUS RESERVATION SYSTEM!!!======================================\n");
    printf("------------------------------------------------------------------------------------------------------------\n");
    printf("Press any key to continue...\n");


}
void showMenu(){
    printf("WELCOME TO SHS BUS RESERVATION SYSTEM");
    printf("1.\tView all available bus\n2.\tBook tickets\n3.\tCancel tickets\n4.\tView book tickets\n5.\tExit");
}

