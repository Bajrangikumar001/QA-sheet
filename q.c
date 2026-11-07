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

