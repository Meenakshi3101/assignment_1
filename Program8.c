// Accept three or four integer numbers and find its avgerage.

#include<stdio.h>
int main(){

    int a,b,c,d;
    float avg;

    printf("Enter numbers:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    avg =  (float)(a+b+c+d)/4;

    printf("The avg is: %f",avg);

    
}