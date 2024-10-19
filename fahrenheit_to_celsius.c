#include <stdio.h>

int main() 
{
    float fahrenheit = 68.5;
    float celsius;
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("Value of temperature in Fahrenheit is : %.2f\n\n", fahrenheit);
    printf("Temperature in Celsius is : %.2f\n", celsius);
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
    
    return 0;
}
