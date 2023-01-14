#include <stdio.h> 
#include <math.h> 
int main() 
{  
double num, power, square_root; 
printf("Enter a number: "); 
scanf("%lf", &num); 
power = pow(num, 2); 
square_root = sqrt(num); 
printf("Square: %.2f\n", power); 
printf("Square root: %.2f\n", square_root); 
return 0; 
}