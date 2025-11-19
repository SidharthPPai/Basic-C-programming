///////////////////////////////////////////////
// C program to convert fahrenhiet to celcius
// g++ nineth.cpp -o nine
// ./nine 0 300 20 
//
//
//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h> 


int main(int argc, char *argv[])
{
    float fahr, celsius;
    int lower, upper, step;


    if (argc != 4) {
        printf("Usage: %s <lower_limit> <upper_limit> <step_size>\n", argv[0]);
        return 1; 
    }


    lower = atoi(argv[1]);
    upper = atoi(argv[2]);
    step = atoi(argv[3]);
  

   
    if (step <= 0) {
        printf("Error: Step size must be a positive integer.\n");
        return 1;
    }

    printf("Fahrenheit\tCelsius\n");
    printf("----------\t-------\n");

 
    for (fahr = lower; fahr <= upper; fahr += step) {
        celsius = 5.0 * (fahr - 32.0) / 9.0;

        printf("%.2f\t\t%.2f\n", fahr, celsius);
    }

    return 0; // Successful execution
}
