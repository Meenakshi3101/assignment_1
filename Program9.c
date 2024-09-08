//Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for conversion is
 
 // ^ c = 5/9 *(^ F - 32)

 #include<stdio.h>

 int main(){


     float temperature  = 30.f;

     float fahrenheit = (temperature * 9.0 / 5.0) + 32.0;

    
     printf("%f degrees celsius is equal to %f degrees fahrenheit\n",temperature, fahrenheit);

 }