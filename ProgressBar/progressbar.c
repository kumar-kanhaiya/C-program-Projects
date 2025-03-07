#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
typedef struct {
    int id;
    int progress;
    int steps;
}task;
const int Max_length = 50;
const int Max_task = 5 ;

void printbar(task t);
void clearScreen();

int main(){
    task t[5];
    srand(time(NULL));
    for(int i =0 ; i<Max_task ; i++){
        t[i].id = i+1;
        t[i].progress = 0;
        t[i].steps = rand() % 5 + 1;
    }
    
    int task_incomplete = 1;
    while(task_incomplete){
        task_incomplete = 0;
        clearScreen();
        for(int i = 0 ; i<Max_task ; i++){
            t[i].progress += t[i].steps;
            if(t[i].progress > 100){
                t[i].progress = 100;
            }
            else if(t[i].progress < 100){
                task_incomplete = 1 ;
            }
            printbar(t[i]);
        }
        sleep(1);
        
    }
    printf("All task completed!!");
    
    return 0;
}


void clearScreen(){
    system("cls");
}


void printbar(task t){
    int bar_print = (t.progress * Max_length) / 100;
    printf("Task %d: [",t.id);
    for(int i = 0 ; i<Max_length ; i++){
        if(i < bar_print){
            printf("=");
        }
        else{
            printf(" ");
        }
    }
    printf("] %d%%\n",t.progress); 
}