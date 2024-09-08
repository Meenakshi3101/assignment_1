// Print the ASCII value of user entered character in decimal,hex, octal format and also print the character for user entered ASCII value

#include<stdio.h>
int main(){

    int num = 'C';

    printf("decimal : : %d\n",num);
    printf("octal : : %o\n",num);
    printf("hexa : : %x\n",num);
    printf("character : : %c\n",num);

    return 0;

}