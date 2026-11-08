// Q5.  Read an integer and check whether it is divisible by 5 and 11, by only one of them, or by neither. Print which case applies.

#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    if(num % 5 == 0 && num % 11 == 0){
        printf("Number is divisible by 5 and 11");
    }
    else if(num % 11 == 0){
        printf("Number is divisible by 11");
    }
    else if(num % 5 == 0){
         printf("Number is divisible by 5");
    }
    else{
         printf("Number is not divisible by either 5 and 11");
    }

    return 0;
}