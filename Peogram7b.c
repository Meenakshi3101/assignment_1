// Accept 4 digit number and display place value of each decimal digit

#include<stdio.h>

int main(){

    int number=2987;
    int ones,tens,hundreds,thousands;

    ones = number%10;      
    tens =(number/10)%10;
    hundreds = (number / 100)% 10;
    thousands = (number / 1000)% 10;

    printf("Place values are as follows: \n");

    printf("Thousands place: %d\n", thousands*1000);

    printf("hundreds place: %d\n", hundreds*100);
    
    printf("tens place: %d\n", tens*10);
    
    printf("ones place: %d\n", ones);
    

}