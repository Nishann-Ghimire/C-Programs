#include <stdio.h>
int main()
{
    //   variables for user input
    float celcius;
    //   variables for process
    float farenheit;

    printf("Please input temp in Celcius: ");
    scanf("%f", &celcius);
    farenheit = (celcius / 5) * 9 + 32;
    printf("The temp in farenheit is %f", farenheit);
    return 0;
}
