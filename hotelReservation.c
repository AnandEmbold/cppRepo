//
//  main.c
//  hotelReservation
//
//  Created by Ayşıl Simge Karacan on 18.01.2020.
//  Copyright © 2020 Ayşıl Simge Karacan. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define ROOM_NUMBER 10

//FUNCTIONS

void mainMenu(void);
void makeReservation(void);
void cancelReservation(void);

//VARIABLES
char *wingArr[ROOM_NUMBER] ={"1","2","3","4","5","6","7","8","9","10"};
char *wing1[ROOM_NUMBER] ={"X","X","X","4","5","6","7","8","9","10"};
char *wing2[ROOM_NUMBER] ={"X","X","X","X","5","6","7","8","9","10"};
char *wing3[ROOM_NUMBER] ={"X","X","X","X","X","X","7","8","9","10"};


int main(void) {
    system("clear");
    
    printf("Welcome to the Hotel Reservation Program...\n\n\n");
    sleep(1);
    mainMenu();
    
    return 0;
}

void mainMenu(){
    system("clear");
    
    printf("------------------------Main Menu---------------------\n\n");
    
    int count=0,pick;
    
    for (unsigned int i=0; i<ROOM_NUMBER; i++) {
        
        if (strcmp(wing1[i], "X") != 0) {
            count++;
        }
        
        if (strcmp(wing2[i], "X") != 0) {
            count++;
        }
        
        if (strcmp(wing3[i], "X") != 0) {
            count++;
        }
        
    }
    
    printf("First Wing:\tSecond Wing:\tThird Wing:\n");
    for (unsigned int i = 0; i<ROOM_NUMBER; i++) {
        printf("\b%s\t\t%s\t\t%s\n",wing1[i],wing2[i],wing3[i]);
    }
    
    printf("Number of AVAILABLE rooms: %d\n\n",count);
    printf("[1] Make a reservation.\n");
    printf("[2] Cancel a reservation.\n");
    
    scanf("%d",&pick);
    
    switch (pick) {
        case 1:
            printf("\n Proceeding...\n");
            sleep(1);
            makeReservation();
            break;
        case 2:
            printf("\n Proceeding...\n");
            sleep(1);
            cancelReservation();
            break;
        default:
            printf("\nTry again!\n");
            sleep(1);
            mainMenu();
            break;
    }
    
    
}

void makeReservation() {
    int wing=0,check=0;
    
    system("clear");
    
    printf("------------------------Make a Reservation---------------------\n\n");
    printf("First Wing:\tSecond Wing:\tThird Wing:\n");
    for (unsigned int i = 0; i<ROOM_NUMBER; i++) {
        printf("\b%s\t\t%s\t\t%s\n",wing1[i],wing2[i],wing3[i]);
    }
    
    
    printf("\nEnter a wing number: ");
    scanf("%d",&wing);
    

            if (wing == 1) {
                
                for (unsigned int i = 0; i<ROOM_NUMBER; i++) {
                    if (strcmp(wing1[i], "X") != 0) {
                        printf("%s\n",wing1[i]);
                        printf("\nYour room is in 1st wing %d room.\n",i+1);
                        wing1[i] = "X";
                        sleep(1);
                        printf("\nProceeding to Main Menu...\n");
                        sleep(1);
                        mainMenu();
                        break;
                    } else {
                        check++;
                    }
                }
                
            } else if (wing == 2) {
                
                for (unsigned int i = 0; i<ROOM_NUMBER; i++) {
                    if (strcmp(wing2[i], "X") != 0) {
                        printf("%s\n",wing2[i]);
                        printf("\nYour room is in 1st wing %d room.\n",i+1);
                        wing2[i] = "X";
                        sleep(1);
                        printf("\nProceeding to Main Menu...\n");
                        sleep(1);
                        mainMenu();
                        break;
                    } else {
                        check++;
                    }
                }
                
            } else if (wing == 3) {
                
                for (unsigned int i = 0; i<ROOM_NUMBER; i++) {
                    if (strcmp(wing3[i], "X") != 0) {
                        printf("%s\n",wing3[i]);
                        printf("\nYour room is in 1st wing %d room.\n",i+1);
                        wing3[i] = "X";
                        sleep(1);
                        printf("\nProceeding to Main Menu...\n");
                        sleep(1);
                        mainMenu();
                        break;
                    } else {
                        check++;
                    }
                }
                
            } else {
                printf("\nEnter a correct wing number!\n");
                sleep(1);
                makeReservation();
            }

    if (check == 10) {
        printf("\nThis wing is full\nTry another one\n");
        sleep(1);
        makeReservation();
    }
    
}

void cancelReservation(){
    int wing,room;
    system("clear");
    
    printf("First Wing:\tSecond Wing:\tThird Wing:\n");
    for (unsigned int i = 0; i<ROOM_NUMBER; i++) {
        printf("\b%s\t\t%s\t\t%s\n",wing1[i],wing2[i],wing3[i]);
    }
    
    printf("------------------------Reservation Cancelling---------------------\n\n");
    printf("Enter wing number: ");
    scanf("%d",&wing);
    puts("");
    printf("Enter room number: ");
    scanf("%d",&room);
    
    if (room<0 || room>10) {
        printf("\nTry again!\n");
        sleep(1);
        cancelReservation();
    } else {
        
        if (wing == 1) {
            
            if (strcmp(wing1[room-1], "X") != 0) {
                printf("It is already empty.");
                sleep(1);
                printf("\nTry again!\n");
                sleep(1);
                cancelReservation();
            } else {
                wing1[room-1] = wingArr[room-1];
                printf("\nIt is cancelled.\n");
                sleep(1);
                printf("\nProceeding to Main Menu...\n");
                sleep(1);
                mainMenu();
            }
            

        } else if (wing == 2) {
            
            if (strcmp(wing2[room-1], "X") != 0) {
                printf("It is already empty.");
                sleep(1);
                printf("\nTry again!\n");
                sleep(1);
                cancelReservation();
            } else {
                wing2[room-1] = wingArr[room-1];
                printf("\nIt is cancelled.\n");
                sleep(1);
                printf("\nProceeding to Main Menu...\n");
                sleep(1);
                mainMenu();
            }
            

        } else if (wing == 3) {
            
            if (strcmp(wing3[room-1], "X") != 0) {
                printf("It is already empty.");
                sleep(1);
                printf("\nTry again!\n");
                sleep(1);
                cancelReservation();
            } else {
                wing3[room-1] = wingArr[room-1];
                printf("\nIt is cancelled.\n");
                sleep(1);
                printf("\nProceeding to Main Menu...\n");
                sleep(1);
                mainMenu();
            }

        } else {
            printf("\nTry again!\n");
            sleep(1);
            cancelReservation();
        }
    }
    
    
}



