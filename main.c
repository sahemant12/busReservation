#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <time.h>

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
    getch();
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n");


    bool UserNameValid = Valid();
    if(UserNameValid==true){
        printf("\n");
        printf("----------------------------------------LOGIN IS SUCCESSFUL-------------------------------------------------\n");
        //printf("==============================WELCOME TO SHS BUS RESERVATION SYSTEM!!!======================================\n");
        //printf("------------------------------------------------------------------------------------------------------------\n");
        printf("Press any key to continue...\n");
        getch();

        printf("LOADING");
        Sleep(1000);
        printf(".");
        Sleep(1000);
        printf(".");
        Sleep(1000);
        printf(".");
        Sleep(1000);


        showMenu();

    }
    else{
        printf("WRONG CREDENTIALS");
    }



}


bool Valid(){

    char pass[30];
    char name[30];
    printf("-----------------------------------------------LOGIN--------------------------------------------------------\n");
    printf("                    ENTER USERNAME :- ");
    gets(name);

    char nCheck[]={"suman"};
    char pCheck[]={"sahoo"};
    if(  strcmp(name, nCheck) ==0)
    {
        printf("\n");
        printf("                    ENTER PASSWORD :- ");
        gets(pass);

        if(strcmp(pass,pCheck)==0){
                return true;
        }
        else{
            return false;
        }

    }
    else{
        return false;
    }



}
void showMenu(){
    printf("\n\nWELCOME TO SHS BUS RESERVATION SYSTEM");
    printf("1.\tView all available bus\n2.\tBook tickets\n3.\tCancel tickets\n4.\tView book tickets\n5.\tExit");
}

