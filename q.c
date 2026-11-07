//200 C Practice Questions: if, if-else, nested if, switch.
//Section 1: if and if-else on numbers (Q1–20) 

//Q1. [M] Read an integer and print whether it is positive, negative or zero, and also whether it is even or odd (zero counts as even).

#include<stdio.h>
int main(){
    int Int;
    printf("Enter number: ");
    scanf("%d",&Int);
    if(Int == 0){
        printf("Entered number is 0");
    }
    else if(Int > 0){
        if(Int%2 == 0){
            printf("Number is even and positive.");
        }
        else{
             printf("Number is odd and positive.");
        }
    }
    else{
         if(Int%2 == 0){
            printf("Number is even and negative.");
        }
        else{
             printf("Number is odd and negative.");
        }
    }

    return 0;

}