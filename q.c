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