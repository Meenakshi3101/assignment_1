//  Assignment no.1 :SEQUENCE
//  Write a problem to accept two numbers and Find its SUM, find its DIFFERENCE, find its PRODUCT

#include<stdio.h>
int main(){

    int a=2,b=3;
    int sum = 0;
    int difference = 0;
    int product =0;

    sum = a+b;
    difference = a-b;
    product = a*b;

    printf("Enter two numbers : %d + %d = %d\n",a,b,sum);
    printf("Enter two numbers : %d - %d = %d\n",a,b,difference);
    printf("Enter two numbers : %d * %d = %d\n",a,b,product);

    return 0;
}