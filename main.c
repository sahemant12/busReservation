#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <time.h>

void start();

void showMenu();

bool Valid();

void availableBus();

int main(){


    start();


    return 0;
}



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



//takes user input of user-name and password and checks if it's matching or not
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
    printf("\n\nWELCOME TO SHS BUS RESERVATION SYSTEM\n");
    printf("1.\tView all available bus\n2.\tBook tickets\n3.\tCancel tickets\n4.\tView book tickets\n5.\tExit\n\n");

    int chooseOption;
    scanf("%d",&chooseOption);


    if (chooseOption==1){
            printf("in the process of building");
            availableBus();
    }
    else if(chooseOption==2){
            printf("in the process of building");
    }
    else if (chooseOption==3){
            printf("in the process of building");
    }
    else if(chooseOption==4){
            printf("in the process of building");
    }
    else if (chooseOption==5){
            printf("thank you ");
    }
    else {
        printf("WRONG OPTION\n");
    }

}

void availableBus(){

    printf("--------------------------------------SHS BUS RESERVATION SYSTEM--------------------------------------------\n\n");
    printf("Bus No.          Bus Name                 Destinations              Fare               Time\n");
    printf("606910          Puri Express                Puri                    50             08:00 to 10:00 (58 km)\n");
    printf("606911          Brahmapur Lines             Brahmapur               150            09:00 to 00:30 (164 km)\n");
    printf("606912          Cuttack Linear              Cuttack                 30             13:00 to 13:50 (34 km)\n");
    printf("606913          Balasore Express            Balasore                200            06:00 to 10:50 (207 km)\n");
    printf("606914          Rourkela Lines              Rourkela                500            22:00 to 06:00 (327 km)\n");
    printf("606915          Sambalpur Linear            Sambalpur               450            21:00 to 04:30 (319 km)\n");
    printf("605822          Kolkata Linear              Kolkata                 600            06:00 to 16:00 (450 km)\n");
    printf("604049          Hyderabad Express           Hyderabad               1200           16:00 to 12:00 (1024 km)\n");
    printf("605157          Ranchi Lines                Ranchi                  600            19:00 to 06:00 (506 km)\n");
    printf("607388          Nagpur Express              Nagpur                  1000           05:00 to 22:30 (840 km)\n\n");
    printf("Enter any key to go back to Main Menu...\n\n");

}

