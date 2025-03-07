#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int computerInput() {
    int number = rand() % 101;
    return number;
}

int main() {
    printf(".................................\n\n");
    printf("Welcome to the Number Guessing Game\n");
    srand(time(0));
    int comInput = computerInput();
    int input = -1 ;
    
    int count = 0;
    while(input != comInput){
        printf("Please enter your guess between (0-100) : ");
        scanf("%d",&input);
        count++;

        if(input > comInput){
            printf("please guess smaller ...\n");
            
        }
        else if(input< comInput){
            printf("please guess greater number ...\n");
        }
        else{
            printf("Congratulations !!! You have successfully guessed the Number in %d attempts\n",count);

        }

        
    }
    printf("\nthanks for Playing\n");
    printf("This program is made by kanhaiya kumar \n");


    return 0;
}
