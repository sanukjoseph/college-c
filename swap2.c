#include <stdio.h>

void main(){
 int a , b;
 printf("Enter first number:\n");
 scanf("%d",&a);
 printf("Enter second number:\n");
 scanf("%d",&b);
 printf("Before Swap \n");
 printf("first number is %d \n ", a);
 printf("second number is %d \n ", b);
 a = a+b;
 b = a-b;
 a = a-b;
 printf("After Swap \n");
 printf("first number is %d \n ", a);
 printf("second number is %d \n ", b);
}
