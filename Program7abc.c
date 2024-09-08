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
    printf("ones place: %d\n\n",a);

    printf("Place values are as follows: \n");
    printf("Thousands place: %d\n", d*1000);
    printf("hundreds place: %d\n", c*100);
    printf("tens place: %d\n", b*10);
    printf("ones place: %d\n\n", a);


    int reverseNo = a * 1000 + b * 100 + c * 10 + d; 

    printf("Reversed number is : %d\n",reverseNo);

}