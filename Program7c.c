
#include<stdio.h>
int main(){

    int number = 4321;
   // int ones ,tens, hundreds,thousands;

   // int reverseNo = ones*1000 + tens*100 + hundreds*10 + thousands; 

    int ones  = number%10;      
    int tens  =(number/10)%10;
    int hundreds = (number / 100)% 10;
    int thousands = (number / 1000)% 10;
    
    int reverseNo = ones * 1000 + tens * 100 + hundreds * 10 + thousands; 


    printf("Reversed number is : %d\n",reverseNo);

}