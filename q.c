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
}
//Q3. Read three integers and print the largest using only if-else (no && allowed). Then rewrite it using && .

#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter x = ");
    scanf("%d",&x);
     printf("Enter y = ");
    scanf("%d",&y);
     printf("Enter z = ");
    scanf("%d",&z);

    if(x > y){
        if(x > z){
            printf("Largest number is %d",x);
        }
        else{
            printf("Largest number is %d",z);
        }
    }
    else{
        if(y > z){
            printf("Largest number is %d",y);
        }
        else{
            printf("Largest number is %d",z);
        }
    }

    return 0;

}

//Q4. Read three integers and print the second largest. Handle the case where two or all three are equal.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);

    if(a>b && b > c){
        printf("Second largest number %d",b);
    }
    else if(b>a && a>c){
        printf("Second largest number %d",a);
    }
    else if(b>c && c>a){
        printf("Second largest number %d",c);
    }
      else if(c>b && b>a){
        printf("Second largest number %d",b);
    }
      else if(c>a && a>b){
        printf("Second largest number %d",a);
    }
      else if(a>c && c>b){
        printf("Second largest number %d",c);
    }
}


    




