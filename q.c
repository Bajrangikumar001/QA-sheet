//Q2. Read two integers and print the larger one. If both are equal, print "Both are equal" instead.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value a: ");
    scanf("%d",&a);
     printf("Enter value b: ");
    scanf("%d",&b);
    if(a>b){
        printf("Larger number is %d",a);
    }
    else if(a == b){
        printf("Both number are equal.");
    }
    else{
        printf("Larger number is %d",b);
    }

    return 0;
}
