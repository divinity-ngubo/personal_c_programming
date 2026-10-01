#include <stdio.h>

int main(){
    /* Test program One, 20 Aug 2025 @20h10 */
    // Farenheit to Celcius Conversion using while loop //

    /*float celcius, farenheit;
    float lower = 0.0, step = 20.0, upper = 300.0;

    printf("Farenheit to Celcius Conversion\n\n");
    printf("Celcius\tFarenheit\n");
    while (farenheit<=upper)
    {
        celcius = 5.0/9.0 * (farenheit-32);
        printf("%2.2f \t %2.2f\n", farenheit, celcius);
        farenheit += step;

    }

    printf("size of celcius %zu\n", sizeof(celcius));
    printf("size of farenheit %zu", sizeof(farenheit));*/


    /* Test Program to convert user input temp in Farenheit to Celcius @21h23*/
    float celcius, farenheit;
    
    printf("Hello User, welcome to Chumani's conversion calculator.\nPlease enter degrees in Farenheit: ");
    scanf("%f.", &farenheit);

    celcius = 5.0/9.0 * (farenheit-32);

    printf("\n%.2f Farenheit in Celcius is %.2f\n\n", farenheit, celcius);
    printf("Thank you for using my calculator <3\nSee you next time....");

    return 0;
}
