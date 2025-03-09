#include <stdio.h>
#include <math.h>

void main(){
    while(1){

        printf("\n...................................................\n\n");
        int choice ;
        int num1 , num2; 
        float first , second;
        printf("Welcome to the Simpfe Calculator Program\n");
        printf("Choose one of the following options\n");
        printf("1 . Add\n2 . Subtract\n3 . Multipfy\n4 . Divide\n5 . Modulus\n6 . Power\n7 . Exit\n");
        printf("Now, Enter your choice : ");
        scanf("%d",&choice);
        if(choice == 7){
            break;
        }
        
        
        switch(choice){
            case 1 :
            printf("Please Enter the first Number : ");
            scanf("%f",&first);
            printf("Please Enter the Second Number : ");
            scanf("%f",&second);
            int r1 = (int)first + second;
            printf("Result of operation is : %d",r1);           
            break;
            case 2 :
            printf("Please Enter the first Number : ");
            scanf("%f",&first);
            printf("Please Enter the Second Number : ");
            scanf("%f",&second);
            int r2 = (int)first - second;
            printf("Result of operation is : %d",r2);           
            break;
            case 3 :
            printf("Please Enter the first Number : ");
            scanf("%f",&first);
            printf("Please Enter the Second Number : ");
            scanf("%f",&second);
            int r3 = (int)first * second;
            printf("Result of operation is : %d",r3);           
            break;
            case 4 :
            printf("Please Enter the first Number : ");
            scanf("%d",&first);
            printf("Please Enter the Second Number : ");
            scanf("%d",&second);
            if(second == 0){
                printf("Invalid Operation");    
            }
            else {
                float r4 = first / second;
                printf("Result of operation is : %0.2f",r4);           
            }
            break;
        case 5 :
        printf("Please Enter the first Number : ");
        scanf("%d",&num1);
        printf("Please Enter the Second Number : ");
        scanf("%d",&num2);
        if(second == 0){
            printf("1");    
        }
        else {
            int result = num1 % num2;
            printf("Result of operation is : %0.2f",result);           
        }
        break;
        case 6 :
        printf("Please Enter the first Number : ");
        scanf("%f",&first);
        printf("Please Enter the Second Number : ");
        scanf("%f",&second);
        int r6 = (int)pow(first,second);
        printf("Result of operation is : %d",r6);           
        break;
        
        case 7 :
        break;
    }
    printf("\n\n");
    
    printf("\nThanks for using Calculator\n");
    printf("This program is made by Kanhaiya Kumar");
}
}
