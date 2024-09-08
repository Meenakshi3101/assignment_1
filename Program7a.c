// Write a program to accept a 4 Digit number and display face value of each decimal digit

#include<stdio.h>

int main(){
    int number;

    printf("Enter 4 digit number:");
    scanf("%d",&number);

   int a = number%10;
   int b = (number/10)%10;
   int c = (number / 100)% 10;
   int d = (number / 1000)% 10;

    printf("The face values are as follows : \n");
    printf("Thousands place: %d\n",d);
    printf("hundreds place: %d\n",c);
    printf("Tens place: %d\n",b);
    printf("ones place: %d\n",a);



   /* int ones ,tens, hundreds,thousands;

    ones = number%10;      
    tens =(number/10)%10;
    hundreds = (number / 100)% 10;
    thousands = (number / 1000)% 10;


    printf("The face values are as follows : \n");
    printf("Thousands place: %d\n",thousands);
    printf("hundreds place: %d\n", hundreds);
    printf("Tens place: %d\n", tens);
    printf("ones place: %d\n", ones);
    
*/


}